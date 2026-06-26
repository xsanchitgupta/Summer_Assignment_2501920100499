// Day 24 - Q95
// Problem Statement: Write a program to Find longest word.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], longest[50], current[50];
    int max_len = 0, curr_len = 0, i, j = 0;
    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0' && isalpha(str[i])) {
            current[j++] = str[i];
            curr_len++;
        } else {
            current[j] = '\0';
            if (curr_len > max_len) {
                max_len = curr_len;
                strcpy(longest, current);
            }
            j = 0;
            curr_len = 0;
        }
    }
    
    printf("Longest word is: %s\n", longest);
    return 0;
}
