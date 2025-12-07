// RELATIONAL OPERATORS IN C:
// Relational operators are used to evaluate conditions (true or false) inside the if statements. 
// Some examples of relational operators are: ==, >=, >, <, <=, !=
// NOTE: ‘=’ is used for assignment whereas ‘==’ is used for equality check. 

// LOGICAL OPERATORS:- &&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT” 
// They are used to provide logic to our C programs.
// IN c you can consider 1 as true and 0 as false.
// Thus logical operators in c always give the ans in 1 and 0 always.

// USAGE OF LOGICAL OPERATORS: 
// 1. && (AND) → is true when both the conditions are true  
// a. “1 and 0” is evaluated as false. 
// b. “0 and 0” is evaluated as false. 
// c. “1 and 1” is evaluated as true. 
// 2. || (OR) → is true when at least one of the conditions is true. 
// a. “1 or 0” is evaluated as true. (1 or 0 → 1) 
// b. “0 or 0” is evaluated as false. (0 or 0 → 0)
// c. “1 or 1” is evaluated as true. (1 or 1 → 1)
// 3. ! (NOT) → returns true if given false and false if given true 
// a. !(3==3) → evaluates to false  
// b. !(3>30) → evaluates to true. 
// As the number of conditions increases, the level of indentation increases. This reduces 
// readability. Logical operators come to rescue in such cases.

#include <stdio.h>

int main(){
    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}