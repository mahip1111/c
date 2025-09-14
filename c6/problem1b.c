#include <stdio.h>


int returning(int* ptr){      // Call by refrence
    printf("The value of ptr is (The adress is ) %d\n", ptr); 
    return 0;
}
int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i); 
    returning(ptr);
    return 0;
}

// SInce yahan par apna call by refrence kiya hai therefore now you will get the same adresses.