// Void Function:-
// A void function is a function that does not return any value.
// Its return type is written as void.
// It can still perform actions (like printing, modifying variables, etc.), but it won’t give back a value to the caller.

// Example 1:- Simple void function

#include <stdio.h>

void greet() {
    printf("Hello, welcome to C programming!\n");
}

int main() {
    greet();  // calling the void function
    return 0;
}

// Here, greet() just prints a message. It doesn’t return anything.