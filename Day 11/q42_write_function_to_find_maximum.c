// Day 11 - Q42
// Problem Statement: Write a program to Write function to find maximum.

#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Maximum = %d\n", findMax(x, y));
    return 0;
}
