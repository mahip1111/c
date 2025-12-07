// Q. Write a C program to calculate the Economic Order Quantity (EOQ) using the formula
// EOQ = √((2 × Demand Rate × Setup Cost) / Holding Cost).
// The program should take Demand Rate, Setup Cost, and Holding Cost as input from the user and display the calculated EOQ.

// (EOQ ka bara tum badh ma padhna ki ya kya hota hai.)

#include <stdio.h>
#include <math.h>

int main() {
    float drate, sc, hc, EOQ;

    // Input
    printf("Enter the demand rate: ");
    scanf("%f", &drate);

    printf("Enter the setup cost: ");
    scanf("%f", &sc);

    printf("Enter the holding cost: ");
    scanf("%f", &hc);

    // EOQ calculation
    EOQ = sqrt((2 * drate * sc) / hc);

    // Output
    printf("\nThe EOQ is: %.2f\n", EOQ);

    return 0;
}
