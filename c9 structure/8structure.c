// typdef is the reseved keyword in c it is neither a operator nor a fxn.

// typdef is used to make our own datatype.

// It is used to give an alternate name (alias) to an existing data type.

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; 
    float salary;
    char name[10];
} Emp;       // means yahan struct employee = Emp.

int main(){
    typedef int harry;       // like in this case typedef ki madat se apna harry ko int ka characters de diya aur harry name ka ek naya datatype create kar diya.
    harry a = 88;
    printf("The value of a is %d \n", a);

    // typedef struct employee Emp;      // agr aap upar typedef use nhi karoge toh aap yahan use kar sakte ho.

    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);
    
    return 0;
}