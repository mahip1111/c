// Q: Count the number of elements in given array greater than a given number x.

#include <stdio.h>

int main() {
    int arr[100], n, x, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Counting elements greater than x
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    printf("Number of elements greater than %d is: %d\n", x, count);

    return 0;
}
