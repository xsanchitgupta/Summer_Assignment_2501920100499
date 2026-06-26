// Day 29 - Q115
// Problem Statement: Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];
    
    while(1) {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n2. Copy\n3. Concatenate\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) break;
        
        printf("Enter a string: ");
        scanf("%s", str1);
        
        switch(choice) {
            case 1:
                printf("Length: %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
