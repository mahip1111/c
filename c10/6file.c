#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("pro.txt", "r");    // mode ka dhyan rakhna.
    char c = fgetc(ptr); // used to read a character from file (This will print the first int or alphabet or anything of that file)
    printf("%c", c);
    // fputc('c', ptr);   // if you use append then it will print c at end and if use write then it will only ahow c on the whole file.
    return 0;
}