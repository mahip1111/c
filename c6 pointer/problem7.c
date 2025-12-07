// Q: Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main(). 

#include <stdio.h>

int sum(int *a, int *b){
    return *a + *b;
}

float average( int *a, int *b){
    return (*a + *b)/2.0;     // here 2.0 is very necessary otherwise you will get the wrong ans.
}

int main(){
    printf("Enter two numbers: ");
    int i,k;
    scanf("%d %d",&i, &k);
    printf("The sum of %d and %d is: %d\n", i,k,sum(&i,&k));
    printf("tHe average of %d and %d is: %f", i,k,average(&i,&k));
    return 0;
}