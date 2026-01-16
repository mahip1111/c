// code to know whether the triangle is right angled or not.
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
        printf("The triangle is right-angled.\n");
    else
        printf("The triangle is NOT right-angled.\n");

    return 0;
}
