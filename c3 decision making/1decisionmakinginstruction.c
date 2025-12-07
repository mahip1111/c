// CONDITIONAL INSTRUCTIONS 
// Sometimes we want to watch comedy videos on YouTube if the day is Sunday. 
// Sometimes we order junk food if it is our friend’s birthday in the hostel. 
// You might want to buy an umbrella if it’s raining, and you have the money. 
// You order the meal if dal or your favourite behindi is listed on the menu. 
// All these are decisions which depends on a condition being met. 
// In C language too, we must be able to execute instructions on a condition(s) being met.


// DECISION MAKING INSTRUCTIONS IN C  
// • if–else statement 
// • switch statement


#include <stdio.h>

int main(){
    int age = 15;

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}
// In this case both the if will work as they both satisfy the condition

// Note:- that else block is not necessary but optional.