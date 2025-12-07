#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3; 
    free(ptr);        
    printf("%d", ptr[0]);
    return 0;
}

// Here sice apna free(ptr) apna printf ka upar likha thaerefore in this case ptr[0] ki garbage value print ho jayegi.