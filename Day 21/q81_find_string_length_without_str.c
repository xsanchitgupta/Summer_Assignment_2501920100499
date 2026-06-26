// Day 21 - Q81
// Problem Statement: Write a program to Find string length without strlen().

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of the string is: %d\n", i);
    return 0;
}
