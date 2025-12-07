// NOTE:- Swaping karne ke liye apka pas variable ke refrence hona zarurui hai value se kam nhi chalega.

// SWAping means interchange karna 
// Q:- YOU HAVE TWO PLATES ONE HAVE APPLE OTHER HAVE BANANA AND YOU NEED TO INTERCHANGE THESE FRUITS WITH ONE HAND ONLY TELL ME HOW YOU WILL DO THIS?
// ANS:- 1. Take the another plate.
// 2. Put apple in another plate.
// 3. Put the banana in apple wali plate.
// 4. Finally put apple from another pkate to the banana wali plate.
// AND YOU ARE DONE!

// IN similar way fxn. ka andar bhi swaping hoti ha.

#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;     // This identifier is acting like a another plate.
    temp = *a;    // abh apna another plate ma apple dal diya.
    *a = *b;      // abh apna apple wali plate ma banana dal diya
    *b = temp;    // abh apna a ko another plate sa banana wali plate ma shift kar diya.
    // AND YOU ARE DONE!
}
int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}

// int  *in_ptr;  //pointer to integer 
// char *ch_ptr; //pointer to character  
// float *fl_ptr; //pointer to float 