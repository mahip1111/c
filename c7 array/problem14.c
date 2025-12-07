// Q: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <stdio.h>

int main() {
    int arr[100], n;
    int evenSum = 0, oddSum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sums
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];   // even index
        } else {
            oddSum += arr[i];    // odd index
        }
    }

    int diff = evenSum - oddSum;

    printf("Difference = Sum of even index elements - Sum of odd index elements = %d\n", diff);

    return 0;
}

