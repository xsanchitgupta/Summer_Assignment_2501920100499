// Day 28 - Q112
// Problem Statement: Write a program to Create contact management system.

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c;
    printf("--- Contact Management System ---\n");
    printf("Enter Contact Name: ");
    scanf("%s", c.name);
    printf("Enter Phone Number: ");
    scanf("%s", c.phone);
    
    printf("\nContact Saved:\n");
    printf("Name: %s\nPhone: %s\n", c.name, c.phone);
    
    return 0;
}
