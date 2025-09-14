
#include <stdio.h>
#include <string.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 4511;
    // e1.name = "Harry";      This will show you error bcz c language ma aap character array bnana ka badh aap us variable ko = operator ke sath use nhi kar sakte ya toh jab apne char array declare kiya tha tabhi usko = use karke value de deta.
    strcpy(e1.name, "Harry");    // thus we use strcpy fxn. to give e1.name "Harry" string.
    e1.salary = 54.44;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    
    return 0;
}