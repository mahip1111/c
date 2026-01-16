/*
Question:
Write a C program to input a number and print the frequency of each digit
in the number. For every digit (starting from the last digit), count how
many times that digit appears in the entire number and display it.

Note: The program should print the frequency even if the digit repeats again.
*/

// ek bar ye code waps se samjo

#include <stdio.h>

int main()
{
    int n, a, b, c = 0, r1, r2;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;

    // Outer loop: pick each digit from right to left
    while (a != 0)
    {
        r1 = a % 10;   // extract digit
        b = n;         // reset b to original number

        // Inner loop: count occurrences of r1 in the whole number
        while (b != 0)
        {
            r2 = b % 10;   // extract digit
            if (r1 == r2)
                c++;
            b /= 10;
        }

        // Output: print digit and its count
        printf("\nDigit %d appears %d times", r1, c);

        c = 0;      // reset counter
        a /= 10;    // move to next digit
    }

    return 0;
}
