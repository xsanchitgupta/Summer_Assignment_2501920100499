// Day 20 - Q78
// Problem Statement: Write a program to Check symmetric matrix.

#include <stdio.h>

int main() {
    int r, c, a[10][10], trans[10][10], i, j, isSymmetric = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Matrix must be square.\n");
        return 0;
    }
    
    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
            
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            trans[j][i] = a[i][j];
            
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] != trans[i][j]) {
                isSymmetric = 0;
                break;
            }
            
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
        
    return 0;
}
