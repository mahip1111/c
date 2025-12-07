// Main Difference:-
// void function: does a job (like printing) but doesn’t send any value back.
// Non-void function: does a job and sends a value back using return.


#include <stdio.h>

void display(int a, int b){
    printf("Hello how are you, The sum is:- %d", a+b);
    return a+b;
}

int main(){
    display(5,6);       // Here compiler will show you warning bcz void fxn. ka andhar kabhi bhi return allowed hi nhi hota. But ans bhi niche print jarur hoga.
    return 0;
}