#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The size of the array is: %d\n", size);

    return 0;
}


// Total memory occupied by the array
// ----------------------------------    =  size of the array.
//  Memory occupied by one element

