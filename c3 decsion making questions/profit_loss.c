// Q:- Input cost price (CP) and selling price (SP) from the user and display whether it is profit or loss and also print the percentage of profit/loss.

#include <stdio.h>

int main() {
    float cp, sp;
    printf("Enter the value of cost price:- ");
    scanf("%f", &cp);
    printf("Enter the value of selling price: ");
    scanf("%f", &sp);

    if (sp>cp)
    {
        printf("You are in profit of %.2f\n", sp-cp);
        printf("and your profit percentage is: %f\n", ((sp-cp)*100/cp));
    }

    else if (sp==cp)
    {
        printf("No profit and no loss\n");
    }
    
    else{
        printf("You are in loss of %.2f\n", cp-sp);
        printf("and your loss percentage is: %f\n", ((cp-sp)*100/cp));}
    
    return 0;
}