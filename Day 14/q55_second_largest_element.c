// Day 14 - Q55
// Problem Statement: Write a program to Second largest element.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Invalid Input\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is %d.\n", max2);
    return 0;
}
