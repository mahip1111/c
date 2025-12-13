// calculate the sum of of even and odd numbers form 1 to 50 using the do while loop.
#include <stdio.h>

int main(){
    int i=1;
    int even=0, odd=0;
    do{
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
        i++;
    }while(i<=50);
    printf("sum of odd is %d and even is %d", odd, even);
    return 0;
}