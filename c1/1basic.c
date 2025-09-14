#include <stdio.h>   // This line tells the compiler to attach the studio.h file with this programe so as to run the programme as this file takes the important things.
// Here stdio.h is a header file.

int main() {       //Here int main() is a fxn. which is the entry point of the order means ye waiter hai jo order le raha hai. This int is used to give integer as an input and output.
    printf("Hello, World!");       //Here furthur printf is fxn jo ki humna studio.h file se uthaya hai and ye main() fxn. ka andar furthur fxn. hai jisko aap khana bnana wala ki tarah dekh sakta ho.
    return 0;       // return 0 means ki jo value end ma mili wo return kar doh and agr sab kuch sahi hai toh operating system ko 0 de doh.
    // Here ; is used to seperate different fxn. under main().
}            // {} ine braces ka andar jo statements hoti ha unha kehta hai fxn. body.
// "" ka andar wala statements ko kehta hai string.

// Ways to run this code are:-
// 1:- simply right click and click on run code.
// 2:- write gcc in terminal and enter and then write .\1.exe and enter to run the code.
// 3:- write gcc add.c in terminal and enter and then write .\1.exe and enter to run the code.

// NOTE:- C ignores the blank lines.

// Way for multiple line comment:-
/*king
ram
is 
god*/

// In C programming, you should not leave spaces in file names (especially source code file names like .c files). Here's why:
// This can cause issues when:
// 1.Compiling with a command-line tool like gcc (you'll have to escape the space or quote the name)
// 2.Using in scripts or build systems
// 3.Sharing across different OS environments

//  Good Alternatives:
// Use one of the following instead:
// 1.Underscore: my_program.c
// 2.CamelCase: MyProgram.c
// 3.Dash (only for file names, not variable names): my-program.c (less common in C)

// NOTE:- You are not allowed to use . in file name in C programming language.