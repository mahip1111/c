// STRCAT()
// This function is used to concatenate two strings.
// It also requires # include <string,h> header file to run.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[15] = "hello";
    char s2[] = " harry";
    strcat(s1, s2); // s1 now contains "hello harry" 
    // Here string concatenate hokar s1 ma store ho jayega.
    //NOTE:- s1 ma itni jagha honi chahiya ki dona s1 and s2 concatenate hokar usma fit ho jaye

    printf("%s\n",s1);   //Ans: hello harry
    printf("%s",s2);     //Ans:  harry
    
    return 0;
}