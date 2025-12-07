// Type conversion (type casting) is the process of converting a variable of one data type into another.

// Implicit Type Conversion (Type Casting) – Done automatically by the compiler.

// Explicit Type Conversion (Type Casting) – Done manually by the programmer.

// 2. Implicit Type Conversion (Type Casting / Type Promotion)
// Also called type promotion.
// Rules of Implicit Type Conversion: Smaller to larger type: char → int, int → float, float → double
// Integer and floating-point: If an int and float are used in an expression, the int is converted to float.
// Expression result: The result is always of the higher data type.
// Example:
// #include <stdio.h>
// int main() {
//     int a = 5;
//     float b = 2.5;
//     float c;
//     c = a + b;  // 'a' is implicitly converted to float
//     printf("c = %.2f\n", c);  // Output: 7.50
//     return 0;
// }
// Explanation:
// a (int) is promoted to float before addition.
// Result is float.

// 3. Explicit Type Conversion (Type Casting)
// Syntax:
// (type_name) expression

// Rules of Explicit Type Conversion: Can convert any compatible data type to another.
// Can be used to avoid loss of data or control precision.
// Overrides implicit conversion rules.
// Example:
// #include <stdio.h>
// int main() {
//     int a = 7, b = 2;
//     float c;
//     c = (float)a / b;  // 'a' explicitly cast to float
//     printf("c = %.2f\n", c);  // Output: 3.50
//     return 0;
// }

// Explanation:
// Without casting, a/b would be integer division → 3.
// Casting a to float → floating-point division → 3.50

// ✅ Key Differences
// Feature	           Implicit Type Conversion 	Explicit Type Conversion
// Done by	Compiler    automatically	            Programmer manually
// Syntax	            No special syntax	        (type_name) expression
// Risk	            Usually safe, no data loss	May cause data loss if not careful
// Example	            int + float → float	        (float)int / int