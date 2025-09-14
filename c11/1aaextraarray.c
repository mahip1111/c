#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    int arr[n];    // Doing this is valid only in c99 and not in c89.
    arr[n]= 25;
    printf("%d", arr[n]);
    return 0;
}

// This code is wrong as index n is bot possibe here but still it works bcz during the compilation c dont check the bounds like in python and other languages and due to these things c is the fastest language.