//  Q:-  Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:- ");
    scanf("%d", &n);

    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d \n",n,i,n*i);
    }
    
    return 0;
}