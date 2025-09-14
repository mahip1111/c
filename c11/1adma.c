// Q:- Why we use dma in c?
// ANS:- Just imagine, you opened a hotel, initially you have only 5 rooms so at max 5 people can stay. But you also know that later room count 500, 5000 or even 50000 can be made, so if you'll use static memory here, you have to set to maximum value (50000) when you are creating but it's not a good option because initially you don't have that much resources, so you keep dynamically increasing your number of rooms as per your number of people.

// Dynamic memory allocation is a way to allocate memory to a data structure during the runtime. We can use DMA function available in C to allocate and free memory during runtime. 

// FUNCTION FOR DMA IN C  
// Following function are available in C to perform dynamic memory allocation: 
// 1. malloc() 
// 2. calloc() 
// 3. free() 
// 4. realloc()

// MALLOC() FUNCTION:- malloc stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void. It initializes each memory block with a garbage value.

// Syntax of malloc()
// The expression returns a null pointer if the memory cannot be allocated.  
// ptr = (int*) malloc(n* sizeof (int)) 
// n* sizeof (int) = 4n memory is stored 
// and then we use (int*) to convert the null pointer to the int type pointer.

#include <stdio.h>
#include <stdlib.h>    // This is the library to get the acess of the dma functions like malloc and so on

int main(){
    int n;
    int* ptr;
    printf("Enter the value of n:- ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr [1]= 6;
    printf(" THe value of ptr[0] is:- %d", ptr[0]);
    return 0;
}