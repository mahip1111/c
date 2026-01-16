// write a code using conditional operators in c to find which number is greatest of the given three numbers?

#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Using nested ternary operator
    greatest = (num1 > num2)  ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
