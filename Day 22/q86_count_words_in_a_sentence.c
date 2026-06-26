// Day 22 - Q86
// Problem Statement: Write a program to Count words in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    int count = 0, i;
    printf("Enter a sentence: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
    }
    
    // if the string is not empty, add 1 for the first word
    if (str[0] != '\0')
        count++;
        
    printf("Number of words: %d\n", count);
    return 0;
}
