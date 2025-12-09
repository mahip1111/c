// write a program to swap values of two variables using the third variable?

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = b; // temporary plate aur b wali plate ko exchange kar diya.
    b = a;  // abh b wali plate ko a wali plate se replace kar diya,
    a = temp;  //  then finally a wali plate ko temp. se replace kar diya and kam khatam.

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
