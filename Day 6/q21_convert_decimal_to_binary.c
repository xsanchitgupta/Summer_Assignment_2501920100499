// Day 6 - Q21
// Problem Statement: Write a program to Convert decimal to binary.

#include <stdio.h>

int main() {
    int n, binaryNum[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");

    return 0;
}
