#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i;    // j is a pointer pointing to i (j is a character pointer) 
    char**m = &j;

    float k = 5.232;
    float* k1 = &k;    // k1 is a pointer pointing to k (k1 is a float type pointer.)  

    printf("The address of i is %u\n", &i);   // This will tell you the adress of i.
    printf("The address of i is %u\n", j);    // This will also tell you the adress of i.

    printf("The adress of j is %u\n", m);   // This will tell you the adress of j.
    printf("The adress of j is %u\n", &j);   // This will also tell you the adress of j.

    printf("The address of k is %u\n", &k);   // This will tell you the adress of k.


    printf("The value at address j is %d\n", *(&i));   // THis will tell you the  ascii value at address j.
    printf("The value at address j is %d\n", *j);      // This will also tell you the ascii value at address j.

    return 0;
}

// Note:- datatype of both variable and pointer should be the same.

// In my case:-
// 1. Integrs are taking 4 byte of storage.
// 2. character are taking 1 byte of storage.
// 3. float are taking 4 byte of storage.