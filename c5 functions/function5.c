//Q:- is it necessary to use fxn prototye rather we give give direct use fxn. defintion?
// ANS:- In C language, using a function prototype is not always necessary, but it is considered a best practice. Let’s break it down:

// 🔹 Case 1: Function defined before main()
// If you define the function before main(), you don’t need a prototype:

#include <stdio.h>

int sum(int a, int b) {   // Function defined before main
    return a + b;
}

int main() {
    int result = sum(5, 10);  
    printf("Sum = %d\n", result);
    return 0;
}

// ✅ Works fine — compiler already knows about sum() before it is used.