// easy way of structure:- 

#include <stdio.h>
# include <string.h>

struct employee
{
int code; 
float salary;
char name[10];
};

int main(){
    struct employee s1 = {101, 89.5, "Rahul"};       // Short way to declare and assign the values simultaneously.
    printf("%d %f %s ", s1.code, s1.salary, s1.name);  

    return 0;
}