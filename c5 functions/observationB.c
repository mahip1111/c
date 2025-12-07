// Method 1 by printing.

#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9.0/5*c) + 32);
}

int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %.2f", c, c2f(c));
    return 0;
}



