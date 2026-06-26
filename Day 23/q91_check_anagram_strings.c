// Day 23 - Q91
// Problem Statement: Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0}, i, flag = 1;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }
    
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }
    
    if (flag)
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");
        
    return 0;
}
