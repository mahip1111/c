// Q:- Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.

#include <stdio.h>

float force(float m){
    printf("The force exerted by the body is:- %f", m*9.8);
    return m*9.8;
}

int main(){
    force(10);
    return 0;
}

// here you don't use the function call inside the printf and also donot store it into the variable and then use that variable in printf therefore here you just do the function call only inside the int main and thus you will only get the part of printf run of the given function thus to use the return part you need to do any one of the above two steps.