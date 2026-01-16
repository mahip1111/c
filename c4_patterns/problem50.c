// 1 
// A B 
// 1 2 3  
// A B C D
// 1 2 3 4 5

#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Odd row → numbers
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {  // Even row → alphabets
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                printf("%c ", ch);
            }
        }
        printf("\n");
    }

    return 0;
}
