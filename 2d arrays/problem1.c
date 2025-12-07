//  Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively. 

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

    // Printing the tables
    for(int i = 0; i < 3; i++) {
        printf("Table of %d:\n", numbers[i]);
        for(int j = 0; j < 10; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
