// Q:- Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main(). 

// (BASICALLY NEW TYPE OF PROBLEM)

#include <stdio.h>


int* sum(int a, int b){      // int* se ye pta lag gya ki hum return me isse ek adress lenga.
    int sum = a+b;
    printf("The sum is %d\n", sum);

    int* ptr = &sum;    // Here ptr ke andar sum ka adress store ho gya hai.
    return ptr;
}

float* average(int a, int b){
    float avg =  (a+b)/2.0;        // yahn par 2.0 likhna jaruri hai to get final ans of avg in float.
    printf("The average is %f\n", avg);

    float * ptr = &avg;
    return ptr;
}

int main(){
    int x = 4; 
    int y = 6;

    int* ptr1;    // We make these varible of adress to store return value of sum and average fx.
    float* ptr2;

    ptr1 = sum(x,y);            // Aise karna se fxn. chal pda aur return value jo ki address thi wo inka andhar store ho gyi.
    ptr2 = average(x,y);

    printf("The address of sum is %u and of average is %u", ptr1, ptr2 );
    //or you can do the same like:-(aap itni sari line se buch dakta tha.):-

    // printf("The address of sum is %u and of average is %u", sum(x,y) , average(x,y) );

    return 0;
}

// Basically hum yahn par pehla store kar rahe ha and then print kar rahe hai.
// But easy rehta ki hum direct print kar leta 
// But apko donon tarika pta hona chahiya.

//NOTE:- Always remember jab aap printf ka andar se fxn ko call kafrta ho then in that case pehla fxn ke andar wala printf print hota hai and then printf wala text print hota hai.