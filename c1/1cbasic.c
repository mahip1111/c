// NOTE:- printf() donot leave the line by default like in the case of print() fxn. used in python which automatically take the 
// next text to the next line. Therefore here you need to use \n inside the string to take the text to the next line.

#include <stdio.h>
int main() {
    printf("Hello World\n");
    printf("Helo Maheep");
    return 0;
}

//NOTE:- you cannot use two int main() functions in a single C program.

// HERE'S WHY:- 
// In C, the main() function is the entry point of the program.
// The compiler and operating system expect exactly one main() function to know where to start executing your code.
// Having more than one main() function will result in a compiler error.

// WHAT YOU CAN DO INSTEAD:-
// If you want to test multiple main()-like routines, you can do:-
// 1. Rename one of them to a different function name (like main1(), main2()) and call them conditionally from main().This will be discussed late in the chapter.
// 2 Use different files, each with its own main(), and compile/run them separately.