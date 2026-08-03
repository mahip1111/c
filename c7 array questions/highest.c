// to find the highest of the given element

#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];   // assume first element is max

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[100], n, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = findMax(arr, n);

    printf("Maximum element in the array = %d", max);

    return 0;
}