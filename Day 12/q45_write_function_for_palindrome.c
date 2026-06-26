// Day 12 - Q45
// Problem Statement: Write a program to Write function for palindrome.

#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, remainder, original;
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    return 0;
}
