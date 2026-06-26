// Day 27 - Q107
// Problem Statement: Write a program to Create salary management system.

#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    
    if (basic <= 10000) {
        da = basic * 0.8;
        hra = basic * 0.2;
    } else if (basic <= 20000) {
        da = basic * 0.9;
        hra = basic * 0.25;
    } else {
        da = basic * 0.95;
        hra = basic * 0.3;
    }
    
    gross = basic + da + hra;
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross);
    
    return 0;
}
