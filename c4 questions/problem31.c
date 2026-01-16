// write a program to compute the value of sinx without using the math libraray.

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate power
double power(double base, int exp) {
    double result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

// Function to calculate sin(x) using Taylor series
double sin_taylor(double x, int terms) {
    double sinx = 0;

    for (int n = 0; n < terms; n++) {
        int sign = (n % 2 == 0) ? 1 : -1;   // alternate signs
        sinx += sign * power(x, 2 * n + 1) / factorial(2 * n + 1);
    }

    return sinx;
}

int main() {
    double x;
    int terms;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms for approximation: ");
    scanf("%d", &terms);

    double result = sin_taylor(x, terms);
    printf("sin(%.2lf) ≈ %.6lf\n", x, result);

    return 0;
}
