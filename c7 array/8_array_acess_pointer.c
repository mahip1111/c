// ACessing arrays using pointers.

#include <stdio.h>

int main(){
    int marks[] = {12, 34, 53, 66};

    int* ptr = &marks[0];
    // NOTE:- (int* ptr = marks) is Same as (int* ptr = &marks[0];)
    // i.e agr aap pointer bna kar marks likh raha ho then uska andar marks ka index 0 wala element ka adress store ho raha hai.

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;    // ptr++ kya karega ki agla wla index ka adress par chala jayega.
    }

    return 0;
}