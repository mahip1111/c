// Subtraction of one pointer from another. 

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *p1 = &arr[4];  // points to arr[4] → value = 50
    int *p2 = &arr[1];  // points to arr[1] → value = 20

    int diff = p1 - p2; // tell the distance btw these two arrays.(Here difference of 3 indexes)

    printf("p1 points to: %d\n", *p1);
    printf("p2 points to: %d\n", *p2);
    printf("Difference (p1 - p2): %d\n", diff);

    return 0;
}
