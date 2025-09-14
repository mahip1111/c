// Sometimes our program gets bigger in size and it's not possible for a programmer to track which piece of code is doing what. 
// Function is a way to break our code into chunks so that it is possible for a programmer to reuse them.
// Jaise ki hum yahn par nicha sum function ko call karke kinhi bhi 2 integers ka sum nikal sakta hai therefore instead of doing reoetitive sum we just call the sum fxn.

#include <stdio.h>

// Function prototype (meaans ki hum compiler ko taiyar kar raha hai int input aur output ise sum fxn. se lena ka liya redy ho jao.)
int sum(int, int);     // int sum means ki huma sum fxn. integer dega(it will return integer as a result) and andar wala int bta rahae hai ki sum function integer lega.


// Function definition (Matlab ki fxn. karga kya.)
int sum(int x, int y){    // Here x and y are the parameters.(Parameters are the values or variable placeholders in the function definition.)

    printf("The sum is %d\n", x+y);
    return x+y+1;
    // int add = x+y;
    // return add;
    
}

int main(){
    int a = 1, b=2;
    sum(a,b);  // Function call with arguments a and b

    int e=3, r=5;   // Arguments are the actual values passed to the function to make a call
    sum (e,r);

    int t=7, y=7;
    sum(t,y);

    sum(1,34);   //  aap direct value bhi dal kar function ko use kar sakta ho.

    int c = sum(2,6);   // Here also fxn. call take place
    printf("The value of c is:- %d\n", c);  // Yahan par return ka use hona ka karan hi c ki value 9 print hui hai.


    float m= sum(3,5);        // Here ALSo fxn. call will take place though they both are differebt data type but fxn. call pehla hoga badh ma variable declaration hoga.
            
    printf("The value of m is:- %d", m);    // This will show you ans 0, bcz of different data type.

    return 0;
}

// Bina sum fxn. ka apko aise karna padhta:-
// int a = 1, b=2;
// int c= a+b;
// print("The sum of a+b is %d\n",c)
// Thus to avoid such type of lengthyness ans complexity in the code we use functions.