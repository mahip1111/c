// calloc stands for continuous allocation. It initializes each memory block with a default value of 0.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 3; 
    printf("The value of ptr[0] is:- %d", ptr[0]);
    return 0;
}

// Difference between malloc() and calloc():-

// Feature	                       malloc()	                           calloc()
// Function name	    Memory Allocation	                           Contiguous Allocation
// Syntax	            ptr = (int*) malloc(n * sizeof(int));	       ptr = (int*) calloc(n, sizeof(int));
// Parameters	        Takes one argument → total number of bytes	   Takes two arguments → number of blocks and size of each block
// Initialization    	Memory is initialized with garbage values      Memory is initialized to zero
// Speed	            Slightly faster (no initialization overhead)   Slightly slower (initializes all bytes to zero)
// Use case	        When you don’t care about the initial values   When you need memory with all values set to zero