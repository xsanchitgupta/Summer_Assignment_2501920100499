// Day 15 - Q59
// Problem Statement: Write a program to Rotate array right.

#include <stdio.h>

int main() {
    int n, d;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n;
    
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
    
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
