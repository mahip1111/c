// Solving the above problem using the ternary operators(Better soluttion then the above one.)

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The number %d is %s", num, (num%2)==0?"Even":"Odd");   // Remember this way of using single if inside the printf.
    return 0;

}
