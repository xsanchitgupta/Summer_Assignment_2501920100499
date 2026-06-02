// Day 2 - Q8
// Problem Statement: Write a program to Check whether a number is palindrome.

#include <stdio.h>

int main() {
    long long n, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    original = n;

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}
