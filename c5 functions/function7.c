// Important concept:- 

#include <stdio.h>

int change(int a);

int change(int a) {
    a = 77;         // Misnomer
    return 0;
}

int main(){
    int b=22;
    change(b);   
    printf("b is %d", b);   // Ans =22

    return 0;
}

// This happens because a copy of ‘b’ is passed to the change function