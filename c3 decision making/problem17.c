// write a code to take three numbers from the user and tell whether them form a triangle or not ?

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("The input numbers form an triangle.");
    }
    else{
        printf("They donot form an triangle.");}
        return 0;
    }
