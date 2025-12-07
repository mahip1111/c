// DECLARING A STRING USING POINTERS:- 

#include <stdio.h>

int main(){
    char *ptr="harry";
    ptr="ram";
    printf("%s",ptr);       
    return 0;
}

// since here we declare the string using the pointer we can reinitiallize it but in case of declaring the string using the array we cannot do so.


// DECLARING A STRING USING POINTERS  
// We can declare strings using pointers. 
// char *ptr = "harry"; 
// This tells the compiler to store the string in memory and assigned address is stored in a 
// char pointer. 
// Note: 
// 1. Once a string is defined using char st [] = “harry”, it cannot be reinitialized to 
// something else. 
// 2. A string defined using pointers can be reinitialized.

// Note: Such direct initialisation using pointers results in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change the characters.
// ptr[0] = ‘m’;   // Error

// Why does this happen?
// Pointers change the address to which they point after initialising a new character array!
// char *ptr = “Physics Wallah”;
// printf(“Address 1: %p\n”, ptr);
// ptr = “College Wallah”;
// printf(“Address 2: %p”, ptr)