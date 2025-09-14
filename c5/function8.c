//Q:-  Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>      // pow() fxn. ise header file ki madad se aya hai.

int main(){
    int a = 5;
    // printf("The area of this square is %d\n", pow(a, 2));     // This will show you garbage value bcz pow() is a double type fxn therefoe to to execute it we need to use %f or %lf instead of %d.
    printf("The area of this square is %f\n", pow(a, 2));   //pow(a,2) means a^2
    return 0;
}

// In C language, when you want to store double (floating-point numbers with double precision), you use the double keyword.
// (Format specifier in printf: %lf )and (Format specifier in scanf: %lf)  for double data type