// Day 28 - Q108
// Problem Statement: Write a program to Create marksheet generation system.

#include <stdio.h>

int main() {
    char name[50];
    int rno;
    float m1, m2, m3, total, perc;
    
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rno);
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    
    total = m1 + m2 + m3;
    perc = total / 3.0;
    
    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rno);
    printf("Total Marks: %.2f / 300\n", total);
    printf("Percentage: %.2f%%\n", perc);
    
    if (perc >= 90) printf("Grade: A+\n");
    else if (perc >= 80) printf("Grade: A\n");
    else if (perc >= 70) printf("Grade: B\n");
    else if (perc >= 60) printf("Grade: C\n");
    else if (perc >= 40) printf("Grade: D\n");
    else printf("Grade: F (Fail)\n");
    
    return 0;
}
