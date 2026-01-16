// This is the best method acoording to the gpt tp solve this problem (jus t see what is happening)

#include <stdio.h>

int main() {
    double income, tax = 0;
    printf("Enter your income: ");
    scanf("%lf", &income);

    // Tax slab upper limits
    double limits[] = {300000, 700000, 1000000, 1200000, 1500000};
    // Corresponding rates
    double rates[] = {0.05, 0.10, 0.15, 0.20, 0.30};

    int n = sizeof(limits) / sizeof(limits[0]);
    double prev = 0;

    for (int i = 0; i < n; i++) {
        if (income > limits[i]) {
            tax += (limits[i] - prev) * rates[i];
            prev = limits[i];
        } else {
            tax += (income - prev) * rates[i];
            prev = income;
            break;
        }
    }

    // Income above last slab
    if (income > limits[n-1]) {
        tax += (income - limits[n-1]) * rates[n-1];
    }

    // Add 4% cess
    tax *= 1.04;

    printf("Total tax payable = %.2f\n", tax);
    return 0;
}
