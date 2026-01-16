//  Q:- Write a program to find whether a year entered by the user is a leap year or not. 
// Take year as an input from the user. 

#include <stdio.h>

int main(){
    int year; 
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || year%400==0){     //This is the condition of a leap year.
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }

    return 0;
}

// NOTE:- The condition of leap year is:- 
// (year is divisible by 4 and year is not divisible by 100)  or (year is divisible by 400)