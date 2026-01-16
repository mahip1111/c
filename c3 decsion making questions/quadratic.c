// write a code to find the roots of the quadratic equation.
// check this code again.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, r1, r2;

    // input coefficient
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;   // discriminant

    if (d > 0) {
        // two real and distinct roots
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0) {
        // Two real and equal roots
        r1 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", r1);
    }
    else {
        // Complex roots
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Roots are complex\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}

