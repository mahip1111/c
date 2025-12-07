// Display the sum of the first n terms of the AP:- 1,3,5,7,9.. upto ‘n’ terms.

#include <stdio.h>

int main(){
    int n, sum=0, a=1, d=2;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum+=( a + (i-1)*d);
    }

    printf("%d", sum);
    
    return 0;
}