// NOTE: For the && operator: 
// T&&T=T;  T&&F=F;  F&&T=F;  F&&F=F
// observe one thing that if first wala false hai(F&&T=F;  F&&F=F) then second wala check karna ki jarut hi nahi hai.
// NOTE: Therefore compiler kya karta hai ki agar use pehla wala operator false dikh jata hai then wo dusra wala operator ko run hi nahi karta hai.

#include <stdio.h>

int main(){
    int x=1, y=6;      // x=T, y=T
    int z= x++ && y++;    // 1
    printf("The value of z is: %d\n",z);
    printf("The value of x now is: %d and y now is: %d",x,y);
    return 0;
}