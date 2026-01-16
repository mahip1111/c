// comma operator explained.

// 🔹 Comma Operator ( , ) — Definition
// Comma operator ek binary operator hai jo:
// Multiple expressions ko left to right evaluate karta hai
// Sab expressions execute karta hai
// Sirf last expression ka value return karta hai

// 🔹 Full Working Process (Internally kya hota hai)
// General form:
// (expr1, expr2, expr3, ..., exprN)
// Compiler kya karta hai:
// expr1 evaluate karta hai → result discard
// expr2 evaluate karta hai → result discard
// ...
// exprN evaluate karta hai
// Final value = exprN ka value

// 🔹 Step-by-Step Example 1
// int x;
// x = (10, 20, 30);
// Process:
// 10 → evaluate → ignore
// 20 → evaluate → ignore
// 30 → evaluate → assign to x
// ✔️ x = 30

// 🔹 Step-by-Step Example 2 (Side effects clear honge)
// int a = 5, b = 10, c;
// c = (++a, b += 5);
// Process
// ++a → a = 6 → value ignored
// b += 5 → b = 15 → value returned
// c = 15
// ✔️ Final values:
// a = 6
// b = 15
// c = 15

// 🔹 Step-by-Step Example 3 (printf ke andar)
// int x;
// printf("%d", x = (2, 4, 6));
// Process:
// 2 → evaluate → ignored
// 4 → evaluate → ignored
// 6 → evaluate → returned
// x = 6
// printf prints 6

// 🔹 Why Comma Operator Exists? (Use case)
// Comma operator useful hota hai jab:
// Multiple operations ek hi statement mein karni ho
// Loop ke andar especially

// Example in for loop:
// for (i = 0, j = 10; i < j; i++, j--) {
//     printf("%d %d\n", i, j);
// }
// Yaha:
// i = 0, j = 10 → comma operator
// i++, j-- → comma operator

// 🔹 Operator Precedence (Very Important ⚠️): Comma operator ki precedence sabse lowest hoti hai

// NOTE: Comma as operator and comma as seperator:

// comma as operator curly braces ka andhar ayega and it return the value also it is evaluated left to right: 
// x = (1, 2, 3);  // x = 3

// x=1,2,3;   //comma as a operator works in x = 1, 2, 3; but due to higher precedence of assignment operator, the expression is treated as (x = 1), 2, 3, so x gets value 1.

// comma as seperator donot return the value and just used for the seperation: int x = 1, 2, 3;(throw error.)
// bcz:
// In C, the comma acts as a separator in variable declarations.
// The statement: int x = 1, 2, 3; is INVALID and causes a syntax error.
// This is because during declaration, each comma-separated initializer
// must be associated with a variable.
// Here, only 'x' is declared, while '2' and '3' are not attached to any variable.
// Hence, the program fails at compile time and no value is assigned to x.



