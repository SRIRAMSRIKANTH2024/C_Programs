//The a program to check whether a number can be express as sum of two prime numbers.

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible by any number, not prime
    }
    return 1; // If not divisible by any number, prime
}

// Function to check if a number can be expressed as the sum of two prime numbers
int canExpressAsSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            return 1; // If both i and num - i are prime, it's expressible as the sum of two prime numbers
        }
    }
    return 0; // If no such pair found, it's not expressible as the sum of two prime numbers
}

int main() {
    int t;
   
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int num;
       
        scanf("%d", &num);

        if (canExpressAsSumOfPrimes(num)) {
            printf("YES\n");
        } else {
            printf("NO\n", num);
        }
    }

    return 0;
}