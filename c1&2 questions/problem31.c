// Q:-  Write a program to find the remainder when the number given by user is divided by 97?

#include <stdio.h>

int main(){
    int a;
    int b = 97;
    printf("Enter any integer number :-");
    scanf("%d", &a);
    printf("The remainder when the number given by you is divided by 97 is:- %d\n :-", a%b);
    return 0;
}