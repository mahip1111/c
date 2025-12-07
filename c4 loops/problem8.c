//Q:- Write a program to calculate the factorial of a given number using a for loop. 

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;  // use long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;  // multiply factorial by i
        }
        printf("The factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}

// why the input of the zero is also working here:
// Now, when n = 0:
// The if (n < 0) condition is false, so we go to the else block.
// Inside the loop:
// for (int i = 1; i <= n; i++)
// → Here i = 1, but 1 <= 0 is false, so the loop never runs.
// The variable factorial was initialized to 1, and since the loop never changes it, its value remains 1.