// NOTE:- printf returns the number of characters that were successfully printed on the screen (excluding the null terminator \0).

#include <stdio.h>

int main() {

    int n=printf("Hello maheep");    // it will print the Hello wrld on the screen.
    printf("\nThe return value of the printf is %d", n);   //Ans is 12 including the space and excluding the \0(null character).
    return 0;
}