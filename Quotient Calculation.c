//Prints the quotient of two numbers in each test case



#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Division for test case: %f\n", (float)a / b);
    }

    return 0;
}