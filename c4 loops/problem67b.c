#include <stdio.h>

int main(){
    int n, d=2, a=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d,",a);
        a+=d;
    }
    printf("...");
    
    return 0;
}