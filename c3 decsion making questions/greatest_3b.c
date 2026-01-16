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

    // Using nested ternary operator"
    (num1 > num2)  ? ((num1 > num3) ? printf("num1 is greatest"): printf("num3 is greatest")): ((num2 > num3) ? printf("num2 is greatest") : printf("num3 is greatest"));

    // printf("The greatest number is: %d\n", greatest);

    return 0;
}
