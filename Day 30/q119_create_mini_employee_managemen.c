// Day 30 - Q119
// Problem Statement: Write a program to Create mini employee management system.

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emps[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &emps[i].id);
        printf("Enter Name: ");
        scanf("%s", emps[i].name);
        printf("Enter Salary: ");
        scanf("%f", &emps[i].salary);
    }
    
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emps[i].id, emps[i].name, emps[i].salary);
    }
    return 0;
}
