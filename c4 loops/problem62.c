// 12341234
// 234  234
// 34    34
// 4      4

#include <stdio.h>

int main() {
    int n = 4;  // number of rows

    for (int i = 1; i <=n; i++) {
        // Left stars
        for (int j = i; j <=n; j++)
            printf("%d",j);

        // Middle spaces
        for (int j = 1; j < (2*i-1); j++)
            printf(" ");

        // Right stars
        for (int j = i; j <=n; j++)
            printf("%d",j);

        printf("\n");
    }

    return 0;
}
