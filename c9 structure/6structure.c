// Pointer to structures:-

#include <stdio.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    // or you can do the same as:-
    // struct employee *ptr = &e1;

    // now we can print structure elements using pointer as:-
    printf("%d", ptr->code); // Exactly same as  (*ptr).code

    return 0;
}