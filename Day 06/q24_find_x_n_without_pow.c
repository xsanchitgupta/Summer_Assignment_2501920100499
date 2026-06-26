// Day 6 - Q24
// Problem Statement: Write a program to Find x^n without pow().

#include <stdio.h>

int main() {
    int base, exp;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    for(int i = 0; i < exp; ++i) {
        result *= base;
    }

    printf("Result: %lld\n", result);
    return 0;
}
