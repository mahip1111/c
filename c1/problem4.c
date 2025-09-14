// Q:- Write a program to calculate simple interest for a set of values representing      
// principal, number of years and rate of interest.

# include <stdio.h>
int main(){
    float p,r,t;
    float SI;
    printf("Entee the principal amount:- ");
    scanf("%f",&p);
    printf("Enter the rate of interset:- ");
    scanf("%f",&r);
    printf("Enter the time period:- ");
    scanf("%f",&t);
    printf("THE SIMPLE INTEREST IN THIS CASE WILL BE:- %f", SI=((p*r*t)/100));
    return 0;

}

// NOTE:-  conceptually, an int can be considered a subset of float in C, because:
// An int stores +ve and -ve whole numbers only (e.g., 5, -3, 100).
// A float stores both +ve and -ve whole and fractional numbers (e.g., 5.0, -3.25, 100.5).