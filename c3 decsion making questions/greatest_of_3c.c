#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking which number is greatest
    if (a >= b && a >= c) {
        printf("%d is the greatest number.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the greatest number.\n", b);
    }
    else {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}
  