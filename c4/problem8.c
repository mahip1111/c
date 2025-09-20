//Q:- Write a program to calculate the factorial of a given number using a for loop. 
// Doubt: why input of 0 is also working here?
// i think it should not work here.

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
