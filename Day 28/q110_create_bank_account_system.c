// Day 28 - Q110
// Problem Statement: Write a program to Create bank account system.

#include <stdio.h>

int main() {
    int acc_no;
    char name[50];
    float balance = 0.0, amt;
    int choice;
    
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);
    printf("Enter Account Holder Name: ");
    scanf("%s", name);
    
    while(1) {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);
            balance += amt;
            printf("Deposited successfully.\n");
        } else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);
            if (amt > balance) printf("Insufficient balance!\n");
            else {
                balance -= amt;
                printf("Withdrawn successfully.\n");
            }
        } else if (choice == 3) {
            printf("Account Holder: %s\nBalance: %.2f\n", name, balance);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
