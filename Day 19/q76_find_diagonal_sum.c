// Day 19 - Q76
// Problem Statement: Write a program to Find diagonal sum.

#include <stdio.h>

int main() {
    int r, c, a[10][10], sum = 0;
    printf("Enter rows and columns of square matrix: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Not a square matrix.\n");
        return 0;
    }
    
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
            if (i == j)
                sum += a[i][j];
        }
        
    printf("Sum of principal diagonal: %d\n", sum);
    return 0;
}
