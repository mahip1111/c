// Q:- Check whether a number is a strong number (e.g., 145 = 1! + 4! + 5! = 145).

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // keep a copy of the original number

    while (num > 0) {
        digit = num % 10;           // extract last digit
        sum += factorial(digit);    // add factorial of digit
        num /= 10;                  // remove last digit
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is NOT a Strong Number.\n", original);

    return 0;
}
