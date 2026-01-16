// You can solve the problem 22 using the nested ternary operator

#include <stdio.h>

int main() {
    int num;
    printf("Enter the value of the number: ");
    scanf("%d", &num);

    printf("The number is %s\n", 
           (num > 0) ? "positive" : (num < 0) ? "negative" : "zero");   // Nested ternary operator.

    return 0;
}

//Q:- tell me how is this nested ternary operator is working:- 
//Ans:-  General syntax of the ternary operator is like:-  condition ? expression_if_true : expression_if_false;

// Here, you have a nested ternary:
// (num > 0) ? "positive" : (num < 0) ? "negative" : "zero"

// Break it down:
// First check → (num > 0)
// If true → result = "positive".
// If false → evaluate next ternary (num < 0) ? "negative" : "zero".

// Second check → (num < 0)
// If true → result = "negative".
// If false → result = "zero".

// So the entire expression evaluates to one of three strings:
// "positive"
// "negative"
// "zero"
// That string is passed to printf via %s (string format specifier).