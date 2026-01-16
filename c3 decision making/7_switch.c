// SWITCH CASE CONTROL INSTRUCTION 
// switch-case is used when we have to make a choice between number of alternatives for 
// a given variable.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
        case 2:
            printf("You entered 2\n");
        case 3:
            printf("You entered 3\n");
        case 4:
            printf("You entered 4\n");
        default:
            printf("Nothing matched");
    }
    return 0;
}

// Agr aap ise case ma number 1 enter karoge then uska niche wala sara cases chalenga therefore to avoid this we will be going to use break operator after all the cases.
// The same fxn. is told in the next file.