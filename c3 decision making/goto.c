#include <stdio.h>

int main() {
    int x;

    Goa:  // label
    
    printf("Enter a positive number: ");
    
    scanf("%d", &x);

    if (x <= 0) 
    {
        printf("Invalid! Try again.\n");
        goto Goa;   // jump back
    }

    printf("You entered a pos no %d\n", x);
    return 0;
}