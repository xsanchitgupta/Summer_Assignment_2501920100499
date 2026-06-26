// Day 30 - Q117
// Problem Statement: Write a program to Create student record system using arrays and strings.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[n][50];
    int marks[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter Name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("%s - %d marks\n", names[i], marks[i]);
    }
    return 0;
}
