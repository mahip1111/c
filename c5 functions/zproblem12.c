//Q: Write a code using the functions to calculate the sum of the digits entered by the user.

#include <stdio.h>

int sumOfDigits(int num) {
    int s = 0;
    while (num > 0) {
        s+=num%10;
        num /= 10;
    }
    return s;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The sum of the digits of the number entered by the user is: %d\n", sumOfDigits(num));
    return 0;
}
