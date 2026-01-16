// calculating the compound interest without using the math.h library
#include <stdio.h>

int main() {
    float P, R, A = 1.0;
    int T, i;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%d", &T);

    // Manually calculating (1 + R/100)^T
    for(i = 1; i <= T; i++) {
        A = A * (1 + R/100);
    }

    A = A * P;

    printf("Amount = %.2f\n", A);
    printf("Compound Interest = %.2f\n", A - P);

    return 0;
}
