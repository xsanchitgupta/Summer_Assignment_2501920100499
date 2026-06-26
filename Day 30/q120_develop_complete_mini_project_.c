// Day 30 - Q120
// Problem Statement: Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];
};

void registerUser(struct User *u) {
    printf("Enter new username: ");
    scanf("%s", u->username);
    printf("Enter new password: ");
    scanf("%s", u->password);
    printf("Registration successful!\n");
}

int loginUser(struct User u) {
    char un[50], pw[50];
    printf("Enter username: ");
    scanf("%s", un);
    printf("Enter password: ");
    scanf("%s", pw);
    if (strcmp(u.username, un) == 0 && strcmp(u.password, pw) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    struct User u;
    int choice;
    int isRegistered = 0;
    
    while(1) {
        printf("\n--- Mini Project System ---\n");
        printf("1. Register\n2. Login\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            registerUser(&u);
            isRegistered = 1;
        } else if (choice == 2) {
            if (!isRegistered) {
                printf("Please register first.\n");
            } else {
                if (loginUser(u)) {
                    printf("Login successful! Welcome %s.\n", u.username);
                } else {
                    printf("Invalid credentials.\n");
                }
            }
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
