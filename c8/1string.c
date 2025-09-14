// A string is a 1-D character array terminated by a null character (‘\0’)
// A null character is used to denote the termination of a string.
// Characters are stored in contiguous memory locations. Like 89, 90, 91, 92.....(Character take 1 byte of the ram to store the address.

#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};

    // INITIALIZING STRINGS:-
    // Since string is an array of characters,      
    // it can be initialized as follows : char s[] = {'H', 'A', 'R', 'R', 'Y', '\0'};

    // There is another shortcut for initializing string in C language: 
    // char s[] = "HARRY"; // In this case C adds a null character automatically.

for (int i = 0; i < 3; i++)     // agr aap yahan par i<=3 likhoga then apko null character bhi dekhna ko milega yahan par.
{
    printf("Character at index %d is %c \n", i, st[i]);
}

return 0;
}

// This question is solved above;- Q:- Create a string using double quotes and print its content using a loop.