// write a code to find the roots of the quadratic equation.
// check this code again.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2f, %.2f\n", root1, root2);
    } 
    else {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi\n", 
                realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
