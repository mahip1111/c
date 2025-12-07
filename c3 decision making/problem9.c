// write a code using conditional operators in c to find which number is greatest of the given two numbers?
// (to remember the conditional operators means use of ternary opearators.)

#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter the value of number1: ");
    scanf("%d", &num1);
    printf("Enter the value of number2: ");
    scanf("%d", &num2);
    // num1>num2?printf("Number 1 is greater than number 2"):printf("Number 2 is greater than number 1");
    printf("%d is greater than %d",num1>num2?num1:num2, num2>num1?num1:num2);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter the two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("The greatest number out of %d and %d is %d",num1,num2,num1>num2?num1:num2);
//     return 0;
// }