// realloc() function:- Sometimes the dynamically allocated memory is insufficient or more than required then in that case realloc() is used to allocate memory of new size using the previous pointer and size.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int* ptr; 
    ptr = (int*) malloc(n * sizeof(int)); 
    ptr[0] = 3;  
    printf("The value of ptr[0] is:- %d\n", ptr[0]);

    ptr = (int*) realloc(ptr, 10 * sizeof(int));     // Here by using the realloc() apna array ma storgae bda dhi.
    printf("The value of ptr[0] is:- %d", ptr[0]);
    return 0;
}