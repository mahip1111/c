#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kk.txt", "w");
    fputc('c', ptr);
    return 0;
}

// this will print the c in the kk.txt file.

// thoda aur detail ma padho fgets aur fputs ka bara ma.