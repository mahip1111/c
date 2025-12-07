// Q;-  Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * *
// ye question ek bar dubhara se samjo

#include <stdio.h>

int main(){
    int n = 3;      
    for (int i = 1; i <= n; i++)     // iske through aap 3 lines laya ho.
    {
        for(int j=1; j<= 2*i-1;j++){
            printf("* ");
        }

        printf("\n");
        // This printf prints a new line 
    }
    
    return 0;
}