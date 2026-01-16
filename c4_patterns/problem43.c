// A
// BC
// DEF
// GHIJ
// KLMNO


// NOTE:- You cannot use the "" here for the char then this code will throw the error and will work as an infinite loop.

#include <stdio.h>
int main(){
    char i,j,count='A';     // A=65 and of E=69
    for ( i = 'A'; i <='E'; i++)
    {
        for ( j='A' ; j<=i; j++)
        {
            printf("%c", count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}

// actually yahan par har jagha ascii value use ho rahi hai i aur j ki instead of that place jahan par apna specify kiya hai using the c.


// Method 2 using the ascii value.

// #include <stdio.h>

// int main(){
//     char i,j,count=65;
//     for ( i = 65; i <=69; i++)
//     {
//         for ( j = 65; j<=i; j++)
//         {
//             printf("%c",count);
//             count++;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }