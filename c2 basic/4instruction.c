#include <stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = a/b;  // Here int/int will give int and uska badh float lga kar ussa float operator ma convert kiya hai.
    int d = 6.7;   // Here value of d=6 as d is an integer.
    float e = 9.0;
    float k = e/b;
    printf("The value of a/b is %f\n", c);   // Give ans 4.000000 and not 4.5 bcz c=4 due to the type conversion
    printf("The value of e/b is %f\n", k);    // Give ans 4.500000 due to type conversion
    printf("The value of d is %d\n", d);    // Since yahan apna %d likha ha therefore 6.7 integer ma jayega aur 6 dega.
    return 0;
}

// NOTE:- 
// In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is 
// demoted to 3, losing the fractional part because a is an integer. Conversely, for float 
// a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining 
// precision.

// Quick Quiz: int k = 3.0 /9; value of k? and why? 
// Ans: 3.0/9 = 0.333. But since k is an int, it cannot store floats & value 0.33 is demoted to 
// 0.