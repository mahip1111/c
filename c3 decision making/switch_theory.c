// Restrictions of the switch Statement in C
// The switch statement is useful for checking one variable against multiple constant values, but it has some limitations:

// Expression Type Restriction
// The switch expression must be of integer type — i.e. int, char, short, long, or an enumeration (enum).
// ❌ You cannot use floating-point (float, double) or string values in switch.
// switch (x)  // x must be int, char, etc.

// Case Labels Must Be Constants
// Each case must use a constant or constant expression (like a number or a character literal).

// ❌ Variables are not allowed as case labels.
// case 10:     // ✅ allowed
// case x:      // ❌ not allowed if x is a variable

// Duplicate Case Values Not Allowed
// All case labels must be unique within a single switch.
// case 1:  ...;
// case 1:  ...;   // ❌ Error — duplicate case

// No Range Checking
// switch cannot directly check conditions like x > 10 or x < 5.
// Each case compares for equality only.
// case (x > 10):   // ❌ invalid — not allowed

// Fall-through Behavior
// If you omit break;, control continues (falls through) to the next case unintentionally unless handled carefully.

// No Case for Complex Conditions
// You can’t test multiple variables or compound conditions (like x > y or (x && y)).

// 🧠 Example Comparison
// Using if-else:
// if (grade == 'A')
//     printf("Excellent");
// else if (grade == 'B')
//     printf("Good");
// else if (grade == 'C')
//     printf("Average");
// else
//     printf("Fail");

// Using switch:
// switch (grade) {
//     case 'A': printf("Excellent"); break;
//     case 'B': printf("Good"); break;
//     case 'C': printf("Average"); break;
//     default:  printf("Fail");
// }

// ✅ Switch is better when comparing one variable with many constant values.
// ✅ If-else is better when you have relational or logical conditions.
