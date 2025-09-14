// Q:- Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>

int main(){
    char str[6];
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);     
        fflush(stdin);        // since jo ye loop ha enter ko bhi read kar raha ha therefore to avoid ans har we use this function to get our ans as harry
    }
    str[5] = '\0';    /// yahan apko null character ko single quotes ma hi rakhna hoga.(I dont know the reason.)
    
    printf("%s", str);
    return 0;
}

// Hence both using %c and %s we get the same string but if we dont use fflush(stdin) fxn. then in that case we will get different strings.