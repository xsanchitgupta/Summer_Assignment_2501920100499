// Day 2 - Q5
// Problem Statement: Write a program to Find sum of digits of a number.

#include <stdio.h>

int main() {
    long long n;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
