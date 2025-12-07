///Q: Write a program in c to tell the square of the number unisng the funcitons.

#include <stdio.h>
int square(int a){
    return a*a;
}
int main(){int n;
    printf("Enter the number whose square you: ");
    scanf("%d",&n);
    printf("The square of %d is %d.",n,square(n));
    return 0;
}