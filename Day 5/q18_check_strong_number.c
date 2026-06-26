// Day 5 - Q18
// Problem Statement: Write a program to Check strong number.

#include <stdio.h>

int main() {
    int n, originalNum, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    originalNum = n;

    while (n > 0) {
        rem = n % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong Number\n", originalNum);
    else
        printf("%d is not a Strong Number\n", originalNum);

    return 0;
}
