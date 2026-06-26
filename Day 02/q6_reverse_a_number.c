// Day 2 - Q6
// Problem Statement: Write a program to Reverse a number.

#include <stdio.h>

int main() {
    long long n, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %lld\n", reversed);

    return 0;
}
