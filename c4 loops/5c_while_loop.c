#include <stdio.h>

int main(){
    int i = 0;
    while (2<10) {    // Since 2<10 is always true therefore while loop will execute here.
        printf("The value of i is %d \n", i); 
        i++;
    }
    return 0;
}

// NOTE:- This is an example of infinite loop.