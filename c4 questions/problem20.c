// write a program to count the digits in a number

#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers
    if (num < 0)
        num = -num;

    // If the number is 0, it has 1 digit
    if (num == 0)
        count = 1;
    else {
        while (num != 0) {
            num = num / 10;  // Remove the last digit
            count++;         // Increase digit count
        }
    }

    printf("The number of digits is: %d\n", count);
    
    return 0;
}
