// Day 3 - Q10
// Problem Statement: Write a program to Print prime numbers in a range.

#include <stdio.h>

int main() {
    int low, high;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    
    printf("Prime numbers between %d and %d are: ", low, high);
    while (low < high) {
        int isPrime = 1;
        if (low <= 1) {
            ++low;
            continue;
        }
        for (int i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", low);
        ++low;
    }
    printf("\n");
    return 0;
}
