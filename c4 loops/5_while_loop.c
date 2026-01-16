// WHILE LOOP:-

// while (condition is true) { 
// // Code 
// // The block keeps executing as long as the condition is true 
// } 
// Example:-


#include <stdio.h>
int main()
{
int i = 0;     //Here this line is called as loop counter initialization and i=0 is called loop counter.
while (i<10) {      //This is called as loop counter condition.
printf("the value of i is %d\n", i);  
i++;   // this line is called increment the loop counter.
} 
return 0;
}

// NOTE:- Loop counter can be int or float. i.e:- The loop counter need not be int, it can be float as well.

// Note: If the condition never becomes false, the while loop keeps getting executed. Such 
// loop is known as an infinite loop. 