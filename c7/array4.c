// POINTER ARITHMETIC

#include <stdio.h>

// POINTER ARITHMETIC USING INTEGER POINTER

int main(){
     int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;     // Yahan par utna hi increment hoga jitna byte ka datatype yahan par variable na store kiya hai.
    // yahn par integer na 4 byte store kiya hai therefore ptr++ se ptr ki value ma 4 ka increment hoga.
    printf("The value of ptr is %u\n", ptr);
    printf("The adress of a is %u", &a);    // Remember ki address yahan par a ka same hi rahega.
    // aur abh ptr a ka adress show nhi karega.
    return 0;
}

// similary you can run ptr--.