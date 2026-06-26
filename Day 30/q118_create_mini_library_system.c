// Day 30 - Q118
// Problem Statement: Write a program to Create mini library system.

#include <stdio.h>
#include <string.h>

int main() {
    char books[3][50] = {"C_Programming", "Data_Structures", "Algorithms"};
    int choice;
    
    while (1) {
        printf("\n--- Mini Library System ---\n");
        printf("1. View Books\n2. Borrow Book\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Available Books:\n");
            for (int i = 0; i < 3; i++) {
                if (strcmp(books[i], "") != 0)
                    printf("%d. %s\n", i + 1, books[i]);
            }
        } else if (choice == 2) {
            int bChoice;
            printf("Enter book number to borrow: ");
            scanf("%d", &bChoice);
            if (bChoice >= 1 && bChoice <= 3 && strcmp(books[bChoice - 1], "") != 0) {
                printf("You borrowed: %s\n", books[bChoice - 1]);
                strcpy(books[bChoice - 1], "");
            } else {
                printf("Invalid or already borrowed.\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
