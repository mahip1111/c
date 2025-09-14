#include <stdio.h>

int main()
{

    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    // for (int i = 0; i < 3; i++){
    //     printf("%c", st[i]);}

    // better way to print the string is :-
    printf("%s", st); // %s is a format specifier to print the string.
                      // This is much better way to print the string rather then upar wla tarika.

    return 0;
}