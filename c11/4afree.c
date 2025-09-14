#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3; 
    printf("%d", ptr[0]);
    free(ptr);        // Here free function free the 4n size og memory.
    return 0;
}

// FREE() FUNCTION:-
// We can use free() function to deallocate the memory. The memory allocated using calloc/malloc is not deallocated automatically.