// Day 13 - Q50
// Problem Statement: Write a program to Find sum and average of array.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
