// An array is a collection of similar elements. Array allows a single variable to store multiple values.

#include <stdio.h>

int main(){
    int marks[90]; // Reserve space to store 90 integers (indexing 0 to 89)

    marks[0] = 45;
    marks[1] = 95;

    // We can go all the way till marks[89] and not marks[90] bcz 90 integers hi store honga and here you include 0

    // printf("Marks 0 and Marks 1 is %d %d", marks[0] , marks[1]);     // This will not print , bcz apna %d placeholders ke bich ma , nhi dala hai.

    printf("Marks 0 and Marks 1 is %d , %d" , marks[0] , marks[1]);    // This will print , due to the , you put in btw the placeholders.

    return 0;
}

// ise tarika se aap float aur character array bhi bna sakta ho.
