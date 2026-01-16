// *   *
//  * *
//   *
//  * *
// *   *   for n=5

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print star at diagonals
            if (i == j || i + j == n + 1)  // i=j (top left to the bottom right) for the first diagonal and i+j == n+1 for the second diagonal(top right to the bottom left)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
