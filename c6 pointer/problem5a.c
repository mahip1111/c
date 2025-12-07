// Q: write a function to swap two numbers using the call by value.

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d\n", x, y);  //here values of x and y remains the same bcz copies of x and y are gone inside the function and thus the original values of x and y ramins the same.

    return 0;
}

// note : swaap by value donot change the the actual value of the variable to do so we need to use the call by refrence.