// Day 23 - Q92
// Problem Statement: Write a program to Find maximum occurring character.

#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
        if (count[str[i]] > maxCount) {
            maxCount = count[str[i]];
            maxChar = str[i];
        }
    }
    
    printf("Maximum occurring character is '%c' (occurred %d times).\n", maxChar, maxCount);
    return 0;
}
