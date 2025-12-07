// Q:- Print the prime factors of a given number.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // n must be odd now, check odd factors
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // if n is still > 2, then it is a prime factor itself
    if (n > 2) {
        printf("%d", n);
    }

    return 0;
}

