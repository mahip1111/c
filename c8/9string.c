// STRCPY():- 
// This function is used to copy the content of second string into first string passed to it. 
// Target string should have enough capacity to store the source string.
// These functions are declared under <string.h> header file.

#include <stdio.h>
# include <string.h>

int main(){
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = " bhai";

    char target[30];
    strcpy(target, st); // target now contains "Harry"
    // 1st string is target and 2nd string is st therefore st wali string target ma copy ho jayegi.
    printf("Target string copy st and is equal to:- %s\n", target);
    printf("st string is %s and target string is also %s", st, target);

    return 0;
}