// Write a program to swap the values of two variables without using the third variable.
 #include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without using third variable
    a = a + b;  //a=3 now
    b = a - b;  //b=1 now
    a = a - b;  //a=2 now

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// suppose a=1 and b=2.