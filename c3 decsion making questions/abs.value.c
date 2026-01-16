// Q: To print the absoulte value of the integer entered by the user.

#include <stdio.h>

int main(){ int n;
    printf("Enter the value of the integer: ");
    scanf("%d", &n);
    if (n<0)
    {
        n=-n;
    }
    printf("The absolute value of the given integer is %d.",n);
    return 0;
}