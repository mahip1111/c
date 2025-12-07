// Call By Refrence  (Means you are calling by the address.)
// Way to change the value of variable by calling the function.

#include <stdio.h>

int sum(int *, int *);    // Means ki yahanpar adress ana wala hai variables ke.

int sum(int* a, int* b){
    *a = 6;               // *(&x) = x = 6  ho jayega tabhi toh yahan par x ki value change ho rhi hai (kyunki apna iska adress nhi upar de diya hai.)
    return (*a + *b);     // = return x+y
}

int main(){
    int x = 1, y=6;
    printf("The sum of x and y is %d\n", sum(&x, &y));   // Since yahn par x ki value change ho gyi ha therefore instead of getting the ans 7 we will get our ans as 12
    printf("Because the value of x changes to %d", x);   // Output=12
    return 0;
}

// TO REMEMBER:- Call by value se aap variable ki value kabhi bhi change nhi kar sakta but but call by refrence(address) se kar sakta ho.