//  What will be the output of this program 
// int a = 10; 
// if (a = 11) 
// printf("I am 11"); 
// else  
// printf("I am not 11"); 

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11){    // Since '=' sign is used for assignment and '==' is used for equality check therefore yahan a ko 11 value asign ho jayegi and since it is non zero therefore if statement will be executed here. Therefore ans= I am 11
        printf("I am 11\n"); 
        printf("%d",a);  // This tells us ki actually mai yahan par variable ki value change hui hai.
    }
    else
        printf("I am not 11"); 
    return 0;
}