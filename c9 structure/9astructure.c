#include <stdio.h>

struct Demo {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};

int main() {
    struct Demo d;

    printf("Address of d.a = %u\n", (void*)&d.a);       //adress=0
    printf("Address of d.b = %u\n", (void*)&d.b);       // adress=4
    printf("Address of d.c = %u\n", (void*)&d.c);       // adress=8

    printf("\nTotal size of structure = %lu bytes\n", sizeof(d));   // Output=12.

    return 0;
}

// Q: why here size is coming 12 and why not 6?

// Reason: Most CPU systems require that int must start at an address divisible by 4 to get the quick acess.

// Data Alignment Rule: Most systems require that int must start at an address divisible by 4 (on 32-bit/64-bit systems).So the compiler inserts extra bytes (called padding) to properly align data.

// Member  	Size	  Padding Added	     Reason
// a	        1	        +3 bytes	     To align b to a 4-byte boundary
// b	        4	        0	             Already aligned
// c	        1	        +3 bytes	     To make total size multiple of largest data type (4)

// Total Size = 1 + 3 + 4 + 1 + 3 = 12 bytes

// Why padding after c?
// Because the compiler ensures the structure size is a multiple of the largest data type size (here it is int, i.e., 4 bytes). So, 6 is not a multiple of 4 → next multiple is 8, but due to alignment rules, you get 12 on many systems.

// FULL WORKING OF THIS CODE: 

    // printf("Address of d.a = %u\n", (void*)&d.a);    // random adress=0  // now 3 bytes in form of padding add hongi and 4th position par agla int variable store hoga.
    // // 1=padding, 2=padding, 3=padding
    // printf("Address of d.b = %u\n", (void*)&d.b);    // 4=base adress of int 5=int, 6=int, 7=int 
    // printf("Address of d.c = %u\n", (void*)&d.c);    // 8=adress of character
    // // 9,10,11=padding to make the  total structure size divisible by the largest datatype.