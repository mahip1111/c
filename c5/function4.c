//Q:- what does return nothing means for void fxn.?

// Ans:- When we say a function "returns nothing", it means:
// After executing, the function does not give any value back to the place where it was called.
// The program just continues to the next line.


// Example 1: Void Function (returns nothing)

#include <stdio.h>

void sayHello() {
    printf("Hello!\n");          // just prints
    // no return statement here
}

int main() {
    sayHello();  // call the function
    printf("Back in main.\n");
    return 0;
}

// 👉 After sayHello() runs, it doesn’t give back anything. Program just goes to the next statement (printf("Back in main.")).