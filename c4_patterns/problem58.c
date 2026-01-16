//       A 
//     A B C 
//   A B C D E 
// A B C D E F G 

#include <stdio.h>

int main() {
    int n = 4; // number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf("  "); // 2 spaces for alignment
        }

        // Print letters in the row
        char ch = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
