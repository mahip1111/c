// To print the absoulte value of negative integer or an integer.

#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int num;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Printing absolute value
    printf("Absolute value: %d\n", abs(num));
    
    return 0;
}
