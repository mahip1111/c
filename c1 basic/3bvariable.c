#include <stdio.h>

int main()
{
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    // %d is called format specifier
    // %d is for int, %f is for float, %c is for char, %lf is for double and %Lf is for long double. 
    printf("The value of i is %d and value of j is %d\n", i, j );
    printf("The value of a is %d and value of b is %d\n", a, b );
    printf("The value of c is %d and value of d is %d\n", c, d );
    return 0;
}

// Q:- What is the difference btw the float double and long double?
// ANS:- 
// Type	      Typical Size          *Precision (decimal digits)	
// float	      4 bytes (32 bits)	    ~6–7 digits	
// double	      8 bytes (64 bits)	    ~15–16 digits
// long double	  12 bytes (96 bits)    ~18–21 digits (on GCC: 80-bit, ~19 digits)