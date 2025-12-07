// Q:-  Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

 #include <stdio.h>

 int ptr(int a){   // call by value
    int*k=&a;
    printf("The adress is %u\n",k);
     
 }
 
 int main(){
    int i= 567;
    int*j= &i;

    printf("The adress of i is %u\n", j);
    ptr(i);

    return 0;
 }

//  NOTE:- In this case you will not get the same adresses 
// Q:- Why?
// ANS:- Bcz jab apna call by value kiya toh i ki copy gai exactly i nhi gaya therefore addresses jo aya wo alg alg aye but agr aap call by refrence karta then in that case you will get the same addresses (This code is written in problem1.c)