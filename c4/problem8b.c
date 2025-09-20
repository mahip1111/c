// Another method of the above problem.

// here i also have an doubt ki uopar wala q ma tah use kiya nahi 0! ka and here toh btaya hai.

#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("The factorial of %d is: %lld\n", n, factorial(n));

    return 0;
}
