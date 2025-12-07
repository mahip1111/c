#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", --a, ++a, --a);  
    printf("%d",a);
    return 0;
}
// NOTE:- Pehla sabhi pre and post operators ki madat se a ki value ayegi amd then wo a ki value jahan jahn pre operators honga wahan wahan print ho jayegi, aur baki post wala toh sath sath ma hi apni value fix karta rahenga and last me sare a sath ma print hojayenga.