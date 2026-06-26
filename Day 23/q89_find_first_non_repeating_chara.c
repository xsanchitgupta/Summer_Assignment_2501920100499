// Day 23 - Q89
// Problem Statement: Write a program to Find first non-repeating character.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            printf("First non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }
    
    printf("All characters are repeating.\n");
    return 0;
}
