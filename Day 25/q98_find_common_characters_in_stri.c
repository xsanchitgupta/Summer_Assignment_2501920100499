// Day 25 - Q98
// Problem Statement: Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    for(int i = 0; str1[i] != '\0'; i++) count1[str1[i]]++;
    for(int i = 0; str2[i] != '\0'; i++) count2[str2[i]]++;
    
    printf("Common characters: ");
    for(int i = 0; i < 256; i++) {
        if (count1[i] > 0 && count2[i] > 0 && i != ' ') {
            int min = (count1[i] < count2[i]) ? count1[i] : count2[i];
            for(int j = 0; j < min; j++)
                printf("%c ", i);
        }
    }
    printf("\n");
    return 0;
}
