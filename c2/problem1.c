// Q:- Which of the following is invalid in C? 
// a. int a=1; int b = a; 
// b. int v = 3*3; 
// c. char dt = ‘21 dec 2020’; 

#include <stdio.h>

int main()
{
    // Which of the following is invalid in C?
    int a = 1;  // valid
    int b = a;  // valid
    int v = 3 * 3;  // valid
    // char dt = '21 dec 2020'; // Wrong bcz character constant mai sirf ek hi character ata hai.
    return 0;
}