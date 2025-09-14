// Q:- Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33 marks in each subject. Assume there 
// are three subjects and take the marks as input from the user. 

#include <stdio.h>

int main(){
    float maths,physics,chemistry,totalpercentage;
    printf("Enter the marks in maths:- ");
    scanf("%f", &maths);
    printf("Enter the marks in physics:- ");
    scanf("%f", &physics);
    printf("Enter the marks in chemistry:- ");
    scanf("%f", &chemistry);
    totalpercentage= (((maths+physics+chemistry)/300)*100);

    if (totalpercentage>=40 && maths>=33 && physics>=33 && chemistry>=33)
    {
    printf("You are pass\n");
    printf("Best of luck for your future\n");
    }

    if (totalpercentage>=40 && maths>=33 && physics>=33 && chemistry<33)
    {
    printf("Sorry you are fail due to less marks in chemistry\n");
    printf("Work hard\n");
    }

    if (totalpercentage>=40 && maths>=33 && physics<33 && chemistry>=33)
    {
    printf("Sorry you are fail due to less marks in physics\n");
    printf("Work hard\n");
    }

    if (totalpercentage>=40 && maths<33 && physics>=33 && chemistry>=33)
    {
    printf("Sorry you are fail due to less marks in maths\n");
    printf("Work hard");
    }
    
    if (totalpercentage<40 && maths>=33 && physics>=33 && chemistry>=33)
    {
    printf("Sorry you are fail due to total percentage less than 40\n");
    printf("Work hard bro!");
    }
    return 0;
}

// Note:- This is simple but lengthy approach.
// Smart approach is told on problem3b.c file.
