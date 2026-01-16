// ********
// ***  ***
// **    **
// *      *

#include <stdio.h>

int main() {
    int n = 4;  // number of rows

    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = i; j < n; j++)
            printf("*");

        // Middle spaces
        for (int j = 0; j < 2 * i; j++)
            printf(" ");

        // Right stars
        for (int j = i; j < n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
