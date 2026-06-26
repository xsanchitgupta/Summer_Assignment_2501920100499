// Day 7 - Q28
// Problem Statement: Write a program to Recursive reverse number.

#include <stdio.h>

int reverseNumber(int num);

int sum = 0, rem;

int main() {
    int num, revNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    revNum = reverseNumber(num);
    printf("Reverse of %d = %d\n", num, revNum);
    return 0;
}

int reverseNumber(int num) {
    if (num) {
        rem = num % 10;
        sum = sum * 10 + rem;
        reverseNumber(num / 10);
    }
    else
        return sum;
    return sum;
}
