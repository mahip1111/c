// what is scope and visibility of a variable and give example.
// Scope of a Variable
// Scope defines where in the program a variable can be accessed (i.e., the region of the program where the variable exists).
// Types of scope:
// Local Scope
// A variable declared inside a function or block.
// Can be accessed only within that function or block.
// Disappears when the function/block ends.
// Example:
// #include <stdio.h>
// void func() {
//     int x = 10;  // local variable
//     printf("x inside func = %d\n", x);
// }
// int main() {
//     func();
//     // printf("%d", x);  // Error! x is not visible here
//     return 0;
// }

// Global Scope
// A variable declared outside all functions.
// Can be accessed by any function in the program.
// Exists throughout the program execution.
// Example:
// #include <stdio.h>
// int y = 20;  // global variable
// void func() {
//     printf("y inside func = %d\n", y);
// }
// int main() {
//     printf("y inside main = %d\n", y);
//     func();
//     return 0;
// }

// Block Scope (Nested blocks)
// A variable declared inside any pair of braces {}.
// Accessible only inside that block.
// Can shadow a variable with the same name in an outer block.
// Example:
// #include <stdio.h>
// int main() {
//     int a = 5;  // outer block variable
//     {
//         int a = 10;  // inner block variable, shadows outer a
//         printf("Inner a = %d\n", a);
//     }
//     printf("Outer a = %d\n", a);
//     return 0;
// }

// 2. Visibility of a Variable
// Visibility means where the variable can actually be used or seen by the compiler.
// Local variables: Visible only in their function/block.
// Global variables: Visible in all functions after their declaration.
// Static variables (optional note): Can restrict visibility to the file or function.
// Example of visibility difference:
// #include <stdio.h>
// int x = 100;  // global variable, visible everywhere
// void func1() {
//     int y = 50;  // local variable, visible only in func1
//     printf("y in func1 = %d\n", y);
// }
// void func2() {
//     // printf("%d", y);  // Error! y is not visible here
//     printf("x in func2 = %d\n", x);  // OK, x is global
// }
// int main() {
//     func1();
//     func2();
//     return 0;
// }

// ✅ Key Points:
// Scope → where the variable exists
// Visibility → where the variable can be accessed
// Local variables → limited scope and visibility
// Global variables → wide scope and visibility