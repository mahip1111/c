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

/* NOTE:- An Arithmetic operation between 
• int and int gives int 
• int and float gives float 
• float and float gives float
Example: 
o 5/2 becomes 2 as both the operands are int 
o 5.0/2  becomes 2.5 as one of the operands is float 
o 2/5 becomes 0  as both the operands are int */

// this concept is called as: Implicit Type Conversion / Type Promotion (Automatic Type Casting)