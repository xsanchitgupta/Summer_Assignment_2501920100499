// Day 22 - Q87
// Problem Statement: Write a program to Character frequency.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}, i;
    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    
    printf("Character Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0 && i != ' ' && i != '\n') {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}
