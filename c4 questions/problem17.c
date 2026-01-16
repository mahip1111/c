// Write a program to print the pascals triangle.

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate combination nCr
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++)
            printf(" ");

        // Print numbers
        for (int j = 0; j <= i; j++)
            printf("%d ", combination(i, j));

        printf("\n");
    }

    return 0;
}
