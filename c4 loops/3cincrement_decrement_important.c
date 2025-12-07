// in this case your last operator will not work as pehla wala false hai (first wala toh chalega as it is.)
#include <stdio.h>
int main(){
    int x=0, y=1;      // x=F, y=T
    int z= x++ && y++;    // 0
    printf("The value of z is: %d\n",z);
    printf("The value of x now is: %d and y now is: %d",x,y);
    return 0;
}

// this is very imp. concept you must remeber it.