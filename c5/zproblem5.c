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