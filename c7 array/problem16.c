// Q: Write a program to copy the contents of one array into another in the reverse order. 

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements in reverse order
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[n - 1 - i];
    }

    printf("The elements of the second array in reverse order are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
