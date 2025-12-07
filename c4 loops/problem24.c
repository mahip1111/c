// Q:- Write a program to check whether a number is prime or not.
// see this code again not clear yet.

#include <stdio.h>

int main() {
    int prime = 1;  //initially we are assuming that the number is prime
    int n;
    int i;

    printf("Enter the value of n which you want to check: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0; // 0 and 1 are not prime
        
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;   // Stop checking further    // if you dont use the break then the function will work in slow manner bcz it will irelevantly check for other divisors.
            }
        }
    }

    if (prime)
        printf("The number is prime");
    else
        printf("The number is not prime");

    return 0;
}
