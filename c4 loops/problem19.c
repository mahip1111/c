//Q:- Write a program to reverse a number (e.g., 123 → 321).
// again it is not clear to me yet.
#include <stdio.h>

int main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;                // take last digit
        reversed = reversed * 10 + digit; // add digit to reversed
        num /= 10;                        // remove last digit
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
