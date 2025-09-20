// Q:- Write a program to calculate the sum of the numbers occurring in the multiplication table of n. (consider n x 1 to n x 10).

#include <stdio.h>

int main() {

    int sum=0, i;
    printf("Enter the number for which you want to calculate the sum of the numbers occurring in its multiplication table: ");
    scanf("%d", &i);
    for (int n=1; n<11; n++)
    {
        sum+=n*i;
    }
    printf("The sum of the requireed numbers are:- %d", sum);
    
    return 0;
}

// There’s a shorter and faster method to solve the same problem using a direct formula, so you don’t even need a loop.
// Formula:
// The sum of the multiplication table of 𝑛
// n from 𝑛×1 to 𝑛×10 is: Sum=n×(1+2+3+⋯+10)
// And we know the formula for the sum of the first k natural numbers is: k(k+1)/2
// So, for 𝑘=10 --> k(k+1/2)=55
// Therefore: Sum=n×55

// this method is shown in the next file.