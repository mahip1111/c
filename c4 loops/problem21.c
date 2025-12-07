// Q: Write a problem to calculate the sum of the series 1x2 + 2x3 + 3x4 + ....... + (n-1)xn. User will provide the value of n.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        sum = sum + (i * (i + 1));
    }

    printf("Sum of the series is: %d", sum);

    return 0;
}
