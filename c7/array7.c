// Subtraction of a number form a pointer.

#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *p = &arr[3]; // points to arr[3]

    p = p - 2;        // Now p points to arr[1] (value 20) (-2 pichla -2 wala index ka adress deh rha hai p ko)

    printf("The value at p is %d ", *p);

    return 0;
}
