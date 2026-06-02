// Day 2 - Q7
// Problem Statement: Write a program to Find product of digits.

#include <stdio.h>

int main() {
    long long n;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n == 0) {
        product = 0;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            product *= (n % 10);
            n /= 10;
        }
    }

    printf("Product of digits: %lld\n", product);

    return 0;
}
