// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int countPositive(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countPositive(arr, n);

    printf("Number of positive integers = %d\n", result);

    return 0;
}
