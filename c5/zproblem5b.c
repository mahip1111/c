#include <stdio.h>

float force(float);     // not necessary but isko karke code clear rehti hai.

float force(float mass){
    return mass*9.8;
}

int main(){
    float m ;
    printf("Enter the value of m:- ");
    scanf("%f", &m);
    printf("The value of force is %f", force(m));
    return 0;
}