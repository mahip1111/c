#include <stdio.h>

struct Demo {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
    char m;     // 1 byte
    char n;     // 1 byte
};

int main() {
    struct Demo d;

    printf("Address of d.a = %u\n", (void*)&d.a);       //adress=0   1,2,3=padding(3 paddings added)  (to make the int divisible by 4)
    printf("Address of d.b = %u\n", (void*)&d.b);       // adress=4  5,6,7 (taken by the int)
    printf("Address of d.c = %u\n", (void*)&d.c);       // adress=8
    printf("Address of d.m = %u\n", (void*)&d.m);       // adress=9
    printf("Address of d.n = %u\n", (void*)&d.n);       // adress=10  11(due to allignment rule)
    // therefore 0-11 tak total of 12 bytes liya therefore the size is 12.

    printf("\nTotal size of structure = %lu bytes\n", sizeof(d));   // Output=12.

    return 0;
}

// in both file a and file b the size of the structure is 12 even though we add 2 charactes attribute but due to the padding rules and of allignment rule the ans in both the cases is same.