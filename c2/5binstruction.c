#include <stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 3*b/2*c + 7*a);
    printf("The value is %d\n", a*b-c*a/a+b-a-b*c);  // So here the operation will take place like:- (a*b)-(c*a/a)+b-a-(b*c) and furthur here associativity rule will be followed.
    return 0;
}