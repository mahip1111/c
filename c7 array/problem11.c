// Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array. 

#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Enter a number: ");
    scanf("%d", &n);

    // Store squares of natural numbers in the array
    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i * i;      // storing square of i
    }

    // Print the array elements
    printf("Squares of natural numbers till %d are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
