#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECIPES 20
#define MAX_ING 20
#define MAX_NAME 50

// structure for one recipe
typedef struct {
    char result[MAX_NAME];
    int ingCount;
    char ingredients[MAX_ING][MAX_NAME];
} Recipe;

Recipe recipes[MAX_RECIPES];
int recipeCount = 0;

// memoization
char memoNames[MAX_RECIPES * MAX_ING][MAX_NAME];
int memoValues[MAX_RECIPES * MAX_ING];
int memoCount = 0;

// find memoized value if exists
int getMemo(char *name) {
    for (int i = 0; i < memoCount; i++) {
        if (strcmp(memoNames[i], name) == 0) {
            return memoValues[i];
        }
    }
    return -1; // not found
}

// store memo value
void setMemo(char *name, int value) {
    strcpy(memoNames[memoCount], name);
    memoValues[memoCount] = value;
    memoCount++;
}

// check if name is a potion (appears on LHS of any recipe)
int isPotion(char *name) {
    for (int i = 0; i < recipeCount; i++) {
        if (strcmp(recipes[i].result, name) == 0) {
            return 1;
        }
    }
    return 0; // not found on LHS → item
}

// recursive function to compute minimum orbs
int minOrbs(char *potion) {
    // if item
    if (!isPotion(potion)) return 0;

    // check memo
    int cached = getMemo(potion);
    if (cached != -1) return cached;

    int best = 1e9; // big number

    // check all recipes that make this potion
    for (int i = 0; i < recipeCount; i++) {
        if (strcmp(recipes[i].result, potion) == 0) {
            int cost = recipes[i].ingCount - 1; // base orb cost
            for (int j = 0; j < recipes[i].ingCount; j++) {
                cost += minOrbs(recipes[i].ingredients[j]);
            }
            if (cost < best) best = cost;
        }
    }

    setMemo(potion, best);
    return best;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char line[200];
        scanf("%s", line);

        char *lhs = strtok(line, "=");
        char *rhs = strtok(NULL, "=");

        strcpy(recipes[i].result, lhs);

        recipes[i].ingCount = 0;
        char *tok = strtok(rhs, "+");
        while (tok) {
            strcpy(recipes[i].ingredients[recipes[i].ingCount++], tok);
            tok = strtok(NULL, "+");
        }
        recipeCount++;
    }

    char target[MAX_NAME];
    scanf("%s", target);

    printf("%d\n", minOrbs(target));
    return 0;
}

