// Day 16 - Q62
// Problem Statement: Write a program to Find maximum frequency element.

#include <stdio.h>

int main() {
    int n, maxCount = 0, maxElement;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("Element with maximum frequency is %d (Frequency: %d)\n", maxElement, maxCount);
    return 0;
}
