// 1 
// 1 3 
// 1 3 5  
// 1 3 5 7

#include <stdio.h>

int main(){
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",(1+(j-1)*2));
        }
        printf("\n");
    }
    
    return 0;
}