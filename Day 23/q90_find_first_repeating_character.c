// Day 23 - Q90
// Problem Statement: Write a program to Find first repeating character.

#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            printf("First repeating character is: %c\n", str[i]);
            return 0;
        }
        count[str[i]]++;
    }
    
    printf("No repeating characters found.\n");
    return 0;
}
