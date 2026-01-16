// Q: write a prgram to print the sum of all the even digits of the given number?

#include <stdio.h>

int main() { int sum=0;
    int num, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even digits in the given number are: ");

    // Handle negative numbers
    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;   // extract last digit
        if (digit % 2 == 0){  
            printf("%d", digit);
            sum +=digit;}
            num = num / 10;     // remove last digit
        }
        printf("\n");

    printf("The sum of digits at the even place are: %d.", sum);
    return 0;}