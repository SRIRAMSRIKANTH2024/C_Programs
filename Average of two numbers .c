//Average of two numbers in each test case
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%f\n", (a + b) / 2.0);
    }

    return 0;
}