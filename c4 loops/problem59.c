//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>

int main() {
    int n = 4; // number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf("  "); // 2 spaces for centering
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
