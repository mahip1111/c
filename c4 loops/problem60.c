//       * 
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <stdio.h>

int main() {
    int n = 4; // number of rows in the upper half

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf("  ");
        }

        // Print stars
        for (int j = 1; j <= (2*i-1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            printf("  ");
        }

        // Print stars
        for (int j = 1; j <= (2*i-1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
