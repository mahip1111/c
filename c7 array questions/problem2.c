// Write a code to calculate the sum of all the elements of the given array.

#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    printf("The sum of all elements of the array is: %d\n", sum);

    return 0;
}


