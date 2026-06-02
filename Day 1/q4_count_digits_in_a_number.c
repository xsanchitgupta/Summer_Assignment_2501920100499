// Day 1 - Q4
// Problem Statement: Write a program to Count digits in a number.

#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle 0 explicitly
    if (n == 0) {
        count = 1;
    } else {
        // Handle negative numbers
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            n /= 10;
            ++count;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
