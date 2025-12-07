// Q: Write a program using the function to reverse the number.

#include <stdio.h>

int reverse(int num) {
    int reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;           // get the last digit
        reversed = reversed * 10 + digit; // build the reversed number
        num = num / 10;             // remove the last digit
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter the number whose reverse you want: ");
    scanf("%d", &num);
    printf("The reverse of the given number is %d", reverse(num));
    return 0;
}
