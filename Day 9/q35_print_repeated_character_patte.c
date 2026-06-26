// Day 9 - Q35
// Problem Statement: Write a program to Print repeated character pattern.

#include <stdio.h>

int main() {
    int i, j, rows;
    char alphabet = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}
