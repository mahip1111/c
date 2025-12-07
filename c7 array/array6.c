// Following operations can be performed on a pointer:
// 1. Addition of a number to a pointer.
// 2. Subtraction of a number from a pointer.
// 3. Subtraction of one pointer from another.
// 4. Comparison of two pointer variables.

// Addition of a number to pointer.

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // int *p = &arr[0];
    int *p = arr; // both the above and this line means the same.
    p = p + 2;    // Now p points to arr[2] (value 30)  (+2 agla +2 wala index ka adress deh rha hai p ko)

    printf("The value at p is %d", *p); // 30

    return 0;
}