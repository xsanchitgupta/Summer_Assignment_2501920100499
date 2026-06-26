// Day 19 - Q74
// Problem Statement: Write a program to Subtract matrices.

#include <stdio.h>

int main() {
    int r, c, a[100][100], b[100][100], diff[100][100], i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);
            
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &b[i][j]);
            
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            diff[i][j] = a[i][j] - b[i][j];
            
    printf("\nDifference of two matrices is:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j)
            printf("%d   ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
