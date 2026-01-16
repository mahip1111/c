// Calculate the product of all the elements in the given array.

#include <stdio.h>

int main() {
    int arr[100], n;
    long long product = 1;  // Use long long to handle large values

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];  // Multiply each element
    }

    printf("The product of all elements in the array is: %lld\n", product);

    return 0;
}


