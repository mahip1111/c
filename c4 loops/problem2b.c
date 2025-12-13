// one line method of the problem 2 (not proffessional but short)
// very smart method.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("The values fron 1-%d are:- \n",n);
    for (int i = 1; i <= n; printf("%d \n", i++));
    // Here what you did is ki apna increment wali jagha ma printf dal ka uskle andhar ma increment kar diya.
}
