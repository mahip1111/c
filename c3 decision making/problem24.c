/* 
Question:
Write a C program to calculate the Time Between Orders (TBO) using the formula:

        TBO = √( (2 × Setup Cost) / (Demand Rate × Holding Cost) )

The program should take Demand Rate, Setup Cost, and Holding Cost as input 
from the user and display the calculated TBO.
*/

// (tbo ka bara ma dekhna badh ma ki ya kya hota hai.)

#include<stdio.h>
#include<math.h>

int main() {
    // Declaration
    float drate, sc, hc, TBO;

    // Input
    printf("Enter the demand rate : ");
    scanf("%f", &drate);

    printf("Enter the setup cost : ");
    scanf("%f", &sc);

    printf("Enter the holding cost : ");
    scanf("%f", &hc);

    // Logic
    TBO = sqrt((2 * sc) / (drate * hc));

    // Output
    printf("\nThe TBO : %f", TBO);

    return 0;
}
