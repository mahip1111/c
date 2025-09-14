#include <stdio.h>

// gets() is a function which can be used to receive a multi-word string.

int main()
{
    char st[30];
    printf("Enter the string ");
    gets(st);          // The entered string is stored in st!

    printf("%s", st);

    return 0;
}

// Note:- It is prefered to use fgets instead of gets but uska bara ma badh ma padhna abh.