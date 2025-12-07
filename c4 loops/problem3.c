//Q:- Write a program to print ‘n’ natural numbers in reverse order. 

#include <stdio.h>

int main(){
    int n=12;       // yahan par mana n ki value leni user se hi thi but waise karke fxn. bda late chal raha tha.
    for (n =12; n; n--)
    {
    printf("%d\n", n);
    }
    return 0;
}