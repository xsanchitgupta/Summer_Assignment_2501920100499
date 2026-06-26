// Day 11 - Q44
// Problem Statement: Write a program to Write function to find factorial.

#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %llu\n", num, factorial(num));
    return 0;
}
