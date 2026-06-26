// Day 16 - Q61
// Problem Statement: Write a program to Find missing number in array.

#include <stdio.h>

int main() {
    int n, sum = 0, expected_sum;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements (1 to %d, one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    expected_sum = (n * (n + 1)) / 2;
    printf("Missing number is: %d\n", expected_sum - sum);
    return 0;
}
