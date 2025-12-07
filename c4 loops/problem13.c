//Q:- Write a program to find the sum of digits of a given number.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;  // Extract last digit and add
        num /= 10;        // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}

//Q:- What is happening here!
// Ans:-
// Key Idea:-
// % 10 → gives the last digit of a number.
// / 10 → removes the last digit from the number.

// So the loop peels off digits one by one, adding them to sum.

// Example: num = 1234
// First Iteration
// num = 1234
// num % 10 = 4 → last digit
// sum = sum + 4 = 4
// num = num / 10 = 123 (last digit removed)
// Second Iteration
// num = 123
// num % 10 = 3
// sum = 4 + 3 = 7
// num = 123 / 10 = 12
// Third Iteration
// num = 12
// num % 10 = 2
// sum = 7 + 2 = 9
// num = 12 / 10 = 1
// Fourth Iteration
// num = 1
// num % 10 = 1
// sum = 9 + 1 = 10
// num = 1 / 10 = 0
// Loop Ends
// Now num = 0, so condition num > 0 fails → exit loop.
// Final sum = 10.