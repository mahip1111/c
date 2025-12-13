// write a code to calculate the compound interst?

#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    double principal, rate, time, compound_interest, amount;

    // Taking user input
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate compound amount
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compound_interest = amount - principal;

    // Display result
    printf("\nCompound Interest = %.2lf", compound_interest);
    printf("\nTotal Amount = %.2lf\n", amount);

    return 0;
}
