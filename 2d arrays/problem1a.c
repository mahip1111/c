// printing in the grid form.

#include <stdio.h>

int main() {
    int table[3][10];
    int numbers[3] = {2, 7, 9};

    // Filling the 3x10 table
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            table[i][j] = numbers[i] * (j + 1);
        }
    }

    // Printing in grid form
    printf("    1   2   3   4   5   6   7   8   9   10\n");
    printf("-----------------------------------------\n");

    for(int i = 0; i < 3; i++) {
        printf("%d | ", numbers[i]);
        for(int j = 0; j < 10; j++) {
            printf("%-3d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
