#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;


    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);           // Theses all functions will print the value od i.
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    printf("The value of i is %d\n", **k);
    printf("The value of i is %d\n", ***(&k));

    return 0;
}

// Just remember ki * and & are anti and they both cancel each other.
