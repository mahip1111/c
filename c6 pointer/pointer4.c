// TYPES OF FUNCTION CALL:-
// Based on the way we pass arguments to the function, function calls are of two types:-
// 1. Call by value → Sending the values of arguments. 
// 2. Call by reference → Sending the address of arguments.(basically it is call by adress but yahan par ise hum generally call by refrence kehta hai.) 

// CALL BY VALUE:-     (Same ha jo apna itni der sa kiya hai.)

#include <stdio.h>

int sum(int, int);    // Function prototype

int sum(int a, int b){    // Function definition
    a = 6; 
    return a + b;
}

int main(){
    int x = 1, y=6;
    printf("The sum of x and y is %d\n", sum(x, y));
    printf("The value of x is %d", x);    // x will remain same as copy of x is passed throught the sum function.
    return 0;
}

// NOTE(TO REMEMBER ALWAYS):- Sum function cannot change x using a because copy of x is provided to sum in a.