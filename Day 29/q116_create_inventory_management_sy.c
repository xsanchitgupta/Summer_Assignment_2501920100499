// Day 29 - Q116
// Problem Statement: Write a program to Create inventory management system.

#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item it;
    printf("--- Inventory Management ---\n");
    printf("Enter Item ID: ");
    scanf("%d", &it.id);
    printf("Enter Item Name: ");
    scanf("%s", it.name);
    printf("Enter Quantity: ");
    scanf("%d", &it.quantity);
    printf("Enter Price: ");
    scanf("%f", &it.price);
    
    printf("\nItem Details:\n");
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\nTotal Value: %.2f\n", it.id, it.name, it.quantity, it.price, it.quantity * it.price);
    
    return 0;
}
