// Day 29 - Q114
// Problem Statement: Write a program to Create menu-driven array operations system.

#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, i, ele;
    
    while(1) {
        printf("\n--- Array Operations ---\n");
        printf("1. Insert\n2. Display\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter element: ");
            scanf("%d", &ele);
            arr[n++] = ele;
            printf("Element inserted.\n");
        } else if (choice == 2) {
            printf("Array elements: ");
            for (i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
