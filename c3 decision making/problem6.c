// Q:- Write a program to determine whether a character entered by the user is 
// lowercase or not. 

// You must know the ascii table to solve this problem.

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);   //This will give the ascii value of the character.  (btw this line is optional.)
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}