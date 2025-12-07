// write a code using the functions to tell whether the number entered by the user is prime or not.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // return 0 here means that the number is not prime.
    }
    for (int i = 2; i * i <= num; i++) {
        // Why i<=  √num?
        // If num is divisible by a number greater than its square root, it must also be divisible by a smaller number.
        // Example: 36 → 36 ÷ 6 = 6 (√36). No need to check beyond 6.
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
