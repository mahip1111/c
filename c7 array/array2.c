// WAY TO ACESS THE ARRAY USING PRINTF AND SCANF FUNCTIONS.
// Q:- Write a program to accept marks of five students in an array and print them on the screen. 
#include <stdio.h>

int main(){
    int marks[5];  

    printf("Enter marks of 5 students\n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);       // Isko avoid karne ke liya aap loops ka use karte ho.
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark %d :-",i);
        scanf("%d", &marks[i]);
    }

      for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    
 
    return 0;
}