// Day 28 - Q111
// Problem Statement: Write a program to Create ticket booking system.

#include <stdio.h>

int main() {
    int dest;
    int tickets;
    float cost = 0;
    
    printf("--- Ticket Booking System ---\n");
    printf("1. City A - Rs 500\n");
    printf("2. City B - Rs 800\n");
    printf("3. City C - Rs 1200\n");
    printf("Select destination: ");
    scanf("%d", &dest);
    
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    
    if (dest == 1) cost = 500 * tickets;
    else if (dest == 2) cost = 800 * tickets;
    else if (dest == 3) cost = 1200 * tickets;
    else {
        printf("Invalid destination.\n");
        return 0;
    }
    
    printf("\nBooking successful!\nTotal Cost: Rs %.2f\n", cost);
    return 0;
}
