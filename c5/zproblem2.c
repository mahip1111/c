// Q:-  Write a program using function to find average of three numbers. 

//NOTE:- printf dont take next text to next line but scanf next text ko next line par bej deta hai.

#include <stdio.h>

int average(int a, int b, int c){
    printf("The avg is:- %d\n",((a+b+c)/3));
    return (a+b+c)/3;
}

int main(){
    average(1,3,5);

    int p,f,g;
    printf("Enter the value of p:-");      
    scanf("%d", &p);
    printf("Enter the value of f:-");
    scanf("%d", &f);
    printf("Enter the value of g:-");
    scanf("%d", &g);

    printf("The avg of d,f,g is:- %d", average(p,f,g));

    return 0;
}