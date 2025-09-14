#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            // break; // exit the loop now!
            continue; // skip this iteration now
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");
    
    return 0;
}

// The ‘break’ statement is used to exit the loop irrespective of whether the condition is 
// true or false. 
// Whenever a “break” is encountered inside the loop, the control is sent outside the loop 

// The ‘continue’ statement is used to immediately move to the next iteration of the loop. 
// The control is taken to the next iteration thus skipping everything below “continue” 
// inside the loop for that iteration.

