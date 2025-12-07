// in this case both the operators will work properly as T is first.
#include <stdio.h>
int main(){
    int x=1, y=0;      // x=T, y=F
    int z= x++ && y++;    // 0
    printf("The value of z is: %d\n",z);
    printf("The value of x now is: %d and y now is: %d",x,y);
    return 0;
}