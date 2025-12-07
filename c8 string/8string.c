// STANDARD LIBRARY FUNCTIONS FOR STRINGS:- 
// C provides a set of standard library functions for string manipulation. 
// Some of the most commonly used string functions are:-

// STRLEN():- 
// This function is used to count the number of characters in the string excluding the null (‘\0’) characters. 
// These functions are declared under <string.h> header file.

#include <stdio.h>
# include <string.h>  // apko ye wali header file add karni padegi.

int main(){
    char st[] = "Harry";
    char s1[56] = "Harry bhai";   //NOTE:- space ki bhi indexing hoti ha string array ka andhar.
    char s2[56] = "bhai ji";

    printf("Total number of characters in the string st[] is:- %d \n", strlen(st));
    printf("Total number of characters in the string s1[56] is:- %d \n", strlen(s1));
    printf("Total number of characters in the string s2[56] is:- %d \n", strlen(s2));

    return 0;
}