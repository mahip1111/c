// to find the particular key in the given array.
#include <stdio.h>

int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;   // key found, return index
    }
    return -1;          // key not found
}

int main() {
    int arr[100], n, key, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    index = search(arr, n, key);

    if(index != -1)
        printf("Key found at index %d", index);
    else
        printf("Key not found");

    return 0;
}
