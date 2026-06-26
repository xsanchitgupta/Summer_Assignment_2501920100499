// Day 28 - Q109
// Problem Statement: Write a program to Create library management system.

#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Book Title: ");
    scanf("%s", b.title);
    printf("Enter Author Name: ");
    scanf("%s", b.author);
    
    printf("\n--- Library Book Details ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    
    return 0;
}
