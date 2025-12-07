//  Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

#include <stdio.h>

int main(){
    int n,a=1;
    int d=2;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d,", a+(2*(i-1)));}   // (last term/ general term) of an AP = a + (n-1)*d
    printf("...");
    

    return 0;
}