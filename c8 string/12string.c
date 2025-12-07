// Modifying individual characters
#include <stdio.h>
#include <string.h>

int main()
{
    char str[96] = "abcdef";
    str[0] = 'M';     // simple modification.
    str[1] = 97;      // modifiying the string using the ascii value.
    printf("%s",str);
    return 0;
}
