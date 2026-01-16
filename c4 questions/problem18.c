// program to evaluate e^x

#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate e^x using Taylor series
double exp_taylor(double x, int terms) {
    double sum = 1; // initialize with 1 for the first term

    for (int n = 1; n < terms; n++) {
        sum += (pow(x, n) / factorial(n));
    }

    return sum;
}

// Function to calculate power (without math.h)
double pow(double base, int exp) {
    double result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main() {
    double x;
    int terms;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Enter number of terms for approximation: ");
    scanf("%d", &terms);

    double result = exp_taylor(x, terms);
    printf("e^%.2lf ≈ %.6lf\n", x, result);

    return 0;
}
