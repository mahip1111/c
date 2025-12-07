#include <stdio.h>
int main() {
    const int a = 100; // Declaring a constant
    // a=200;    // This will show you compilation error
    printf("The constant value is: %d\n", a);
    return 0;
}

// Thus the basic difference btw the constant and a varible is now cler ki varible ki value can be changed but constant ki cannot.