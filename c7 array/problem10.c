//Q: Find the minimum value out of all the elements in the array.

#include <stdio.h>

int main() {
    int arr[100], n, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];  // Assume first element is the minimum

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update min
        }
    }

    printf("The minimum value in the array is: %d\n", min);

    return 0;
}
