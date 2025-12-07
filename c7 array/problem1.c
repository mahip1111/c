// Q: Write a program to create an array of 10 integers and store multiplication table of 5 in it. 

#include <stdio.h>

int main() {
    int table[10];
    
    // Storing multiplication table of 5
    for (int i = 0; i < 10; i++) {
        table[i] = 5 * (i + 1);
    }

    // Printing the table
    printf("Multiplication Table of 5:\n");
    for (int i = 0; i < 10; i++) {
        printf("5 x %d = %d\n", i + 1, table[i]);
    }

    return 0;
}
