// Print he name without using the semicolon in the code?

#include <stdio.h>

int main() {
    if (printf("maheep gupta")) {}    // or you can use ; instead of the {}
}

// Here printf return the number of characters and which is 12 and 12 inside the if is true therefore if will work.
// NOTE:- Yahan par apko ya toh semicolon lgna hai ye toh {} lgana hai in oder to tell the compiler ki if kahali hai.
// it is true ki agr ek statemnt hi likhni ho toh {} is not necessary but here we need to tell the compiler that our if is empty therefore using ; or {} is neceassry in this case.

