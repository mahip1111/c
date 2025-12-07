//Q:- Generate and print the first N prime numbers.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // not prime
    }
    return 1; // prime
}

int main() {
    int N, count = 0, num = 2;

    printf("Enter how many prime numbers you want: ");
    scanf("%d", &N);

    printf("First %d prime numbers are:\n", N);

    while (count < N) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
