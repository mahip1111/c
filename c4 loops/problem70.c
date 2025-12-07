// Given AP = 3, 7, 11, 15, …. Check if x = 31 belongs to this AP.

#include <stdio.h>

int main() {
    int a, d, x;
    printf("Enter first term (a): ");
    scanf("%d", &a);
    printf("Enter common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number to check: ");
    scanf("%d", &x);

    if ((x - a) % d == 0 && (x - a) / d >= 0)
        printf("%d is in the AP.\n", x);
    else
        printf("%d is NOT in the AP.\n", x);

    return 0;
}
