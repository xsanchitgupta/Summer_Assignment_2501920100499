// Day 26 - Q103
// Problem Statement: Write a program to Create ATM simulation.

#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0, amount;
    
    while(1) {
        printf("\nATM Simulation System\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Current Balance: Rs %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: Rs %.2f\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful! New balance: Rs %.2f\n", balance);
                break;
            case 4:
                printf("Thank you for using our ATM.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
