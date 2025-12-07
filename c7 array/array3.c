// Another ways to initialize arrays:-

// INITIALIZATION OF AN ARRAY:-  
// There are many other ways in which an array can be initialized. 
// int cgpa[3] = {9, 8, 8}; // arrays can be initialized while declaration 
// int cgpa[] = {9, 8, 8};  // Yahan par apko 3 likhna ki bhi jarurt nhi ha kyunki array itna toh gin hi sakta hai.

#include <stdio.h>

int main(){
    int cgpa[3] = {9, 8, 8};
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}

// Consider this array: 
// int arr[3] = {1, 2, 3} // 1 integer = 4 bytes 
// This will reserve 4 x 3 = 12 bytes in memory (4 bytes for each integer)
// THese will be stored in contiguous blocks of addresses (means ki agr kisi ke end ma 70 ha then agle ma 74, 78 and go on....)