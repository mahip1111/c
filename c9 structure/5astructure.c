// Array of Structures:- You can make an array of structures to store multiple records.

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    int age;
    char name[20];
};

int main(){

    struct employee face[100];
    face[0].code= 1;
    face[1].code=2;
    face[0].age=45;
    face[1].age=67;
    strcpy(face[0].name , "Harry");
    strcpy(face[1].name , "Maheep");

    printf("The details of employee 1 is:- code= %d, age= %d, name= %s", face[0].code, face[0].age, face[0].name);

    return 0;
}

// But since hum itna sare print nhi kar sakte therefore we use loop.

