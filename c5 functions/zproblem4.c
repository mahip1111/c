// Write a function to take the three numbers and tell the highest one.

#include <stdio.h>

int greatest(int num1, int num2, int num3){
    return (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
}

int main(){int n,m,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&n,&m,&c);
    printf("The greatest of %d, %d, %d is %d",n,m,c,greatest(n,m,c));
    return 0;
}