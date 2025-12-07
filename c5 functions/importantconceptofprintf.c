#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    // NOTE:- Remember ki jo printf ha wo pehala operators ka evaluation karta hai right to left. and then print karta hai.
    // therefore
    // 1. a++(print and then increment)=> means ki 3rd position wala a=4 fix ho gaya.
    // 2. ++a(increment and then print)=> means ki a ki value 6 hogyi par abhi print nhi hoga.
    // 3. a=6 hogya then 1st wla a print hoga and second wala a print hoga without using its operator bcz iska operator use ho gya hai.
    // 4. Therefore 1st a=6 and 2nd a=6 also.
    // 5. Therefore ans is 6,6,4
    return 0;
}