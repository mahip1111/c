#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);  //5

    i = i + 5; 
    printf("The vakue if i is %d\n", i);  //10

    i++;        //(Pehla i print hoga then increment hoga.)
    printf("The value of i is %d\n",i);  //11 

    ++i;      //(Pehla i increment hoga then print hoga.)
    printf("The value of i is %d\n", i); //12

    printf("The value of i is %d\n", i++); // 12     (Since yahan par ++, 'i' ka badh mai hai therefore pehla i print hoga, so increment wala part yahan par use hi nhi hoga.)

    printf("The value of i is %d\n",i); // 13    (bcz pichla ma print bla hi 12 hua but compiler na output na deta hua but andar hi andar i ko increment kar diya.)
    
    i +=2; // Same as i = i + 2;
    printf("The value of i is %d\n", i); // 15

    printf("The value of i is %d", ++i);  //16

    // NOTE:- Difference btw ++i operator and i++ operator:-
    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Pre increment Operator)

    return 0;
}

// NOTE:- +++ operator does not exist. 
// i+=2 is compound assignment which translates to i = i + 2 
// Similar to += operator we have other operators like -=, *=, /=, %=. 