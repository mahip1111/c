// write a program to find the sum of the square of the n integers.

#include <stdio.h>

int main() {
    int n;
    float sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n * (n + 1) * (2 * n + 1)) / 6.0;  // using formula

    printf("Sum of squares of first %d integers = %.0f\n", n, sum);

    return 0;
}
