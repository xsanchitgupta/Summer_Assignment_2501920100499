// Day 16 - Q63
// Problem Statement: Write a program to Find pair with given sum.

#include <stdio.h>

int main() {
    int n, target_sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target_sum);
    
    printf("Pairs with sum %d are:\n", target_sum);
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No such pair found.\n");
    }
    return 0;
}
