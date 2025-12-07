// 11111
// 2222
// 333
// 44
// 5

 #include <stdio.h>
 
 int main(){
    int n=5;
    int i=5;
    int j;
    for ( i = 1; i<=5; i++)
    {
        for ( j=5; j>=i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    

    return 0;
 }