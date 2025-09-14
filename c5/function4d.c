#include <stdio.h>

void disply(int x, int y){
    printf("The sum is:- %d\n", x+y);
}


int main(){
    disply(3,4);

    disply(9,4);

    // int c = disply(6,7);    // Here compiler will show you warning.
    // This is bcz void fxn. return kuch karta nhi and thus c identifier ka andhar koi value store hi nhi ho sakti.
    
    return 0;
}


