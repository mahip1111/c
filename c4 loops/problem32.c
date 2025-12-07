// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main(){
    int n=5;
    int i=1;
    int j;
    for ( i = 1; i <=n; i++)     // row   (decide the total number of the rows.)
    {
        for ( j= 1; j <=i; j++)    // row ke andhar coloumn   (decide ki rows ma kitna coloumns honga.)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}