// Q:- Write a program to convert Celsius (Centigrade degrees temperature to 
// Fahrenheit). 

#include <stdio.h>

int main(){
    float c;
    printf("Enter the temp. in degree celsius:-");
    scanf("%f", &c);
    float f;
    // f = ((9.0/5.0)*c) + 32;
    printf("The value in Fahrenheit is %f", f= ((9.0/5.0)*c) + 32);

    return 0;
}

// NOTE:- C does not support f-strings like Python does.