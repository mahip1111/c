// wap to program to find the index of the search element in the give array.

#include <stdio.h>

int main() {
    int n, found = 0;
    int arr[] = {1, 2, 3, 4};

    printf("Enter the element you want to search in the given array: ");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++) {
        if (n == arr[i]) {
            printf("The index of %d is %d\n", n, i);
            found = 1;
            break;   // no need to continue searching
        }
    }

    if (!found) {
        printf("The element is not in the array.\n");
    }

    return 0;
}


// ise approach ko yad kar lo.