//Modification of numbers (adding 1 to even, subtracting 1 from odd) and calculating the product across test cases 

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    long long result = 1;
    while (t--) {
        int num;
        scanf("%d", &num);
        result *= (num % 2 == 0) ? (num + 1) : (num - 1);
    }

    printf("%lld\n", result);

    return 0;
}