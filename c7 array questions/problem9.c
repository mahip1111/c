// Find the maximum value out of all the elements in the array

#include <stdio.h>

int main() {
    int arr[100], n, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  // Assume first element is the maximum

    for (int i = 1; i < n; i++) {    // now 2nd elemnt se nth element tak ka code chalao
        if (arr[i] > max) {
            max = arr[i];  // Update max if max is less then arr[i].
        }
    }

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}

// actually here hum first ko max mane raha hai and then compare kar raha hai second se le kar n elements tak using loop and updating the conditon inside the loop.
