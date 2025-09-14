//Q:- Create a two-dimensional vector using structures in C. 

#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
}vector;


int main(){
    vector v1;
    v1.i= 100;
    v1.j= 200;
    printf("Vector v1 is %di and %dj", v1.i, v1.j);


    return 0;
}