// The syntax of a typical ‘for’ loop looks like:-

// for (initialize; test; increment or decrement) 
// { 
// //code; 
// }
// Here intialize means variable declaration and initialization.
// test means loop control condition dalna.
// increment decremmment jo end ma karna padta ha to avoid infinite loop.

#include <stdio.h>

int main(){
    int n = 6;
    for(int i =0;i<=n;i++){
        printf("The value of i is %d\n",i);
    }
    return 0;
}

// REMEMBER:- Iteration means one complete execution of the loop body (the statements inside { }). ek bar chaka toh iteration1 dusri bar chala toh iteration 2 and similarlly go on.