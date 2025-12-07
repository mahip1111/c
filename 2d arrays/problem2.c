// Create a three–dimensional array and print the address of its elements in increasing order.

#include <stdio.h>

int main() {
    int arr[2][2][3];  // Example 3D array (you can change size)

    printf("Addresses in increasing order:\n\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("arr[%d][%d][%d] = %p\n", i, j, k, (void*)&arr[i][j][k]);
            }
        }
    }

    return 0;
}
