#include <stdio.h>

int main(){
    int n, d=2, a=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("sum of %d terms of an AP is %d.",n,(n*((2*a)+(n-1)*d)/2));    // just using the sum formula of the ap.
    return 0;
}