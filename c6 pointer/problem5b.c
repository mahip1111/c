// Q: write a code to Swap two numbers using pointers.(swap two numbers using call by refrence.)

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value of a in temp
    *a = *b;     // assign value of b to a
    *b = temp;   // assign temp (original a) to b
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// NOTE: There is no as such call by refrence in c it is actually call by adress. People often say “Call by Reference” for the pointer method because the effect is similar — the original values change.
// But technically in C:
// We are passing addresses, not references.
// C++ has real references (int &x), but C doesn’t.