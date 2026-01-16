// Example of Arithmetic operator:--
#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    // Here %d is used to give the respective values of the variable.
    // The placeholder %d does not store the value of a variable — instead, it is used to display or format the value of an integer variable, especially in C programming and similar languages (like C++, and sometimes in formatted strings in Python).


    // Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // int d = a^b; (not valid here.)

    return 0;
}