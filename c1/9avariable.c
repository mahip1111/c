// List of the escape sequence operators:-

//    Escape               Sequence Meaning

//     \n	                New line (moves cursor to the beginning of next line)
//     \t	                Horizontal tab
//     \v	                Vertical tab
//     \b	                Backspace
//     \r	                Carriage return (moves cursor to beginning of the same line)
//     \f                	Form feed (new page in printers)
//     \\	                Backslash (\) itself
//     \'	                Single quote (')
//     \"                	Double quote (")
//     \?	                Question mark (?) (used to avoid trigraph issues)
//     \0	                Null character (used to terminate strings in C)
//     \a	                Alert (bell sound, if supported)

// in sab ko use kar ke dekho.


// Example:-
#include <stdio.h>

int main() {
    printf("Hello\nWorld");     // prints Hello and World on new line
    printf("\nTab:\tSpace");    // prints Tab:   Space
    printf("\nBackslash: \\");  // prints Backslash: \
    return 0;
}
