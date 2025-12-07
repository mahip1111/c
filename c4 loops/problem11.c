// Write a code to find the gcd and lcm of two numbers?

#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    // Find GCD using loop
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    gcd = a; // when both are equal, that’s the GCD

    // Find LCM using formula
    lcm = (num1 * num2) / gcd;

    // Display result
    printf("\nGCD of %d and %d = %d", num1, num2, gcd);
    printf("\nLCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}

// GCD stands for Greatest Common Divisor (also called HCF — Highest Common Factor).
// It means the largest number that divides both numbers exactly (without a remainder).
// Example:
// Let’s take two numbers:
// 12 and 18

// 👉 Factors of 12 = 1, 2, 3, 4, 6, 12
// 👉 Factors of 18 = 1, 2, 3, 6, 9, 18

// Common factors = 1, 2, 3, 6
// → The greatest of these = 6

// ✅ So, GCD(12, 18) = 6

// this code to calculate the gcd is working like:-
// let:- a = 12, b = 18
// Loop 1:
// a < b → so b = b - a
// → b = 18 - 12 = 6
// → Now: a = 12, b = 6
// Loop 2:  (loop will again repeat as a is not equal to the b)
// a > b → so a = a - b
// → a = 12 - 6 = 6
// → Now: a = 6, b = 6
// Now both are equal (6) → the loop stops and it is the gcd.