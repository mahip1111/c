// Q: Find the second largest element in the given Array.

#include <stdio.h>

int main() {
    int arr[100], n;
    int max1, max2;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Minimum requirement: at least 2 elements
    if (n < 2) {
        printf("Second largest element does not exist.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Find largest and second largest
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", max2);

    return 0;
}
