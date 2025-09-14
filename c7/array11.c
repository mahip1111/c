// Taking the marks in array from the user and telling you that the adresses of each element are stored in contiguous blocks.
#include <stdio.h>

int main(){
    int marks[5];  

    printf("Enter marks of 5 students\n");
 
    for (int i = 0; i < 5; i++)
    {    printf("Marks at index %d ",i);
        scanf("%d", &marks[i]);
    }

      for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
    }
    return 0;
}

// see the topic passing array to the function.(on pg no. 41 of handbook)