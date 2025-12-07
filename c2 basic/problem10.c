/*
Question:
Write a C program to input two numbers (num1 and num2) and find:
1. The quotient when num1 is divided by num2
2. The remainder when num1 is divided by num2

Display both quotient and remainder as output.
*/

#include <stdio.h>

int main()
{
    int num1, num2, quotient, remainder;

    // Input
    printf("Enter the first number (num1): ");
    scanf("%d", &num1);

    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    // Processing
    quotient = num1 / num2;
    remainder = num1 % num2;

    // Output
    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);

    return 0;
}
