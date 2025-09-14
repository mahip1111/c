#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;         // Since character 1 byte store karta hai therefore ptr ki value 1 se badh jayegi.
    printf("The value of ptr is %u\n", ptr);
    printf("The adress of a is %d", &a);    // adress of a remain same.
    // Here also ptr a ka adress show nhi karega.
    return 0;
}