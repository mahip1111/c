/* NOTE:- An Arithmetic operation between 
• int and int gives int 
• int and float gives float 
• float and float gives float
Example: 
o 5/2 becomes 2 as both the operands are int 
o 5.0/2  becomes 2.5 as one of the operands is float 
o 2/5 becomes 0  as both the operands are int */

// this concept is called as: Implicit Type Conversion / Type Promotion (Automatic Type Casting)

#include <stdio.h>

int main(){
    int n = 45;
    float m = 32.23;

    // The below process is  called as typecasting.
    n = (int) m; // convert the data type to int.
    printf("%d\n", n);
    printf("%f",m);
    return 0;
}