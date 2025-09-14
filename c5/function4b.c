// Example 2: Non-Void Function (returns something)

#include <stdio.h>

int add(int a, int b) {
    return a + b;   // returns an integer
}

int main() {
    int result = add(3, 4);      // Function call hoga but fxn. ka andar kuch hai hi nhi toh kuch print hi nhi hoga.
    printf("Sum is %d\n", result);    // Result ka andhar fxn. ki return value store ho jayegi and wo value yahn par print ho jayegi.
    return 0;
}

// Hence you can say that non void fxn can store value but void cannot.
// Agr aap yahi chiz void fxn. ma karta tabh apko error show hota.