// write a program to check whether the given program is pelindrome or not.

// NOTE: "%" is used to get the last digit and "/" is used to remove the last digit.

#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder, original;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // store original number for comparison

    // Reverse the number using a loop
    while (num != 0)
    {
        remainder = num % 10;                 // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                       // remove last digit
    }

    // Check palindrome
    if (original == reversed)
        printf("\n%d is a palindrome.\n", original);
    else
        printf("\n%d is not a palindrome.\n", original);
    return 0;
}
