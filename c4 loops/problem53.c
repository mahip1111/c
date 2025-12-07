// A B C D 
// A B C D
// A B C D
// A B C D

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {           // 4 rows
        for (char ch = 'A'; ch <= 'D'; ch++) { // Characters from A to D
            printf("%c ", ch);
        }
        printf("\n");  // Move to next line after each row
    }
    return 0;
}
