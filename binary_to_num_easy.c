#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    
    int decimal = 0, base = 1;

    while (n > 0) {
        int digit = n % 10;
        decimal += digit * base;
        base *= 2;
        n /= 10;
    }

    printf("%d", decimal);
}

