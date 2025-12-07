// Example 2: Void function with parameters

#include <stdio.h>

void printSum(int a, int b) {
    printf("Sum is: %d\n", a + b);
}

int main() {
    printSum(5, 10);  // Output: Sum is: 15
        return 0;
}

// Key Points:-
// Declaration: void functionName(parameters);
// Does not return anything.
// Used when you just want the function to do something (like printing, updating global variables, etc.) without giving a result back.