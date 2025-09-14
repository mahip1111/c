//Q:- Write a program to find grade of a student given his marks based on below: 
// 90 – 100 => A 
// 80 – 90 => B 
// 70 – 80 => C 
// 60 – 70 => D 
// 50 – 60 => E 
// <50 => F

// NOTE:- && is used as and operator inside the if condition bracket.
#include <stdio.h>

int main(){
    int a;
    printf("Enter your marks:- ");
    scanf("%d",&a);
    if (a>=90 && a<=100)
    {
    printf("Your grade is A\n");
    }
    if (a>=80 && a<90)
    {
    printf("Your grade is B\n");
    }
    if (a>=70 && a<80)
    {
    printf("Your grade is C\n");
    }
    if (a>=60 && a<70)
    {
    printf("Your grade is D\n");
    }
    if (a>=50 && a<60)
    {
    printf("Your grade is E\n");
    }
    if (a<50)
    {
    printf("Your grade is F\n");
    }
   return 0;
}