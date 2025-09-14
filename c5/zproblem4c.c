// Method 2 by storing and then printing.

#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9.0/5*c) + 32);
}

int main(){
    float c = c2f(45);
    printf("The temp. in degree farenhite is:- %f",c);
    return 0;
}