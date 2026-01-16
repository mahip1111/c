// Q: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Modify array based on index
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {          // Even index
            arr[i] = arr[i] + 10;
        } else {                    // Odd index
            arr[i] = arr[i] * 2;
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
