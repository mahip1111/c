// Q:- Write a program using the function to print the highest of the given two numbers?

#include <stdio.h>

int highest(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = highest(num1, num2);  // call the function and store the result

    printf("%d is the greatest of the given two numbers.\n", result);

    return 0;
}


// Q:- Why we use the return inside the function definition and not the printf?
// Returning makes the function reusable (you can use it for other purposes later).
// Printing inside the function limits flexibility.