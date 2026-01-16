#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (sum = 0; num > 0; num /= 10)  //this loop will run till num>0
    sum += num % 10;

    printf("Sum of digits = %d\n", sum);
    return 0;
}

//Q:- What is happening inside the for loop!
//Ans: let num = 34
// sum = 0, num = 34

// Iteration 1
// Condition: num > 0 → 34>0 
// Body: sum += num % 10 = 0 + 4 = 4
// Increment: num /= 10 = 3

// Iteration 2
// Condition: 3>0
// Body: 4+ 3%10 = 7
// Increment: num = 0

// Iteration 3
// Condition: num > 0 → 0 > 0 ❌ → loop ends.