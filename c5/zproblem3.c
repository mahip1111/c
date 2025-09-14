//Q:- Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float tempconversion(float c){
    // printf("The temp is degree farenhite is:- %f ", 9/5*c + 32);  
    // This will give you wrong ans bcz In C, both 9 and 5 are integers. So 9/5 is evaluated as integer division, which gives 1 (not 1.8).That’s why your Fahrenheit value will be wrong.
    printf("The temp. in degree farenhite is:- %f", 9.0/5*c +32);
    return 9.0/5*c + 32;

}

int main(){
    float c= 10;
    tempconversion(c);
    return 0;
}