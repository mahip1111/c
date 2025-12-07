// Q:- Write a program to change the value of a variable to ten times of its current value. 

#include <stdio.h>

int change(int* a){      //here int*a ka matlab hai ki aap address provide karva rahe ho fxn. ko
    *a= 10 * (*a);      // => a=10*a
    return *a;
    // or you can do it like
    // int b;
    // b=10 * (*a);
    // return b;  
     
}

int main(){
    int i;
    printf("Enter the value of i:-");
    scanf("%d", &i);
    // int*j=&i;
    printf("10 times the value of i is equal to:-  %d",change(&i));
    
    return 0;
}

// NOTE:- Always remember ki call by value sa aap kabhi kbhi bhi actuall value ko change nhi kar sakta you can do so only by the call by refrence.