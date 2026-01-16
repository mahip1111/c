// Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from user.

#include <stdio.h>

// Function declarations
float add(float a, float b)       { return a + b; }
float subtract(float a, float b)  { return a - b; }
float multiply(float a, float b)  { return a * b; }
float divide(float a, float b)    { return b != 0 ? a / b : 0; }

int main() {
    float num1, num2;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");    // you need to use %c as a format specifier to take this output.
    scanf(" %c", &op);   // space before %c to ignore newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    float result;

    // Switch case for operations
    switch(op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero not allowed.\n");
                return 0;
            }
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }

    // Output
    printf("Result: %.2f\n", result);

    return 0;
}
