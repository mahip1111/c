// Differentiate btw the entry controlled and exit controlled loop with suitable example.

//ANS:- Let’s clearly differentiate Entry Controlled Loop and Exit Controlled Loop in C programming 👇

// 🔹 1. Entry Controlled Loop
// ➡ In this type of loop, the test condition is checked before executing the loop body.
// ➡ If the condition is false initially, the loop body will not execute even once.

// Examples:
// for loop
// while loop

// Example Code (while loop):
// #include <stdio.h>
// int main() {
//     int i = 1;
//     while (i <= 5) {  // condition checked first
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }
// 🔸 Explanation:
// Here, the condition i <= 5 is checked before printing.
// If i were greater than 5 initially, the loop would not run even once.

// 🔹 2. Exit Controlled Loop
// ➡ In this type of loop, the test condition is checked after executing the loop body.
// ➡ The loop body executes at least once, even if the condition is false.

// Example:
// do...while loop

// Example Code (do-while loop):
// #include <stdio.h>
// int main() {
//     int i = 6;
//     do {
//         printf("%d\n", i);
//         i++;
//     } while (i <= 5); // condition checked after body
//     return 0;
// }
// 🔸 Explanation:
// Even though i = 6 makes the condition i <= 5 false,
// the loop body runs once before checking the condition.

// 🧾 Summary Table
// Feature	                  Entry Controlled Loop	                    Exit Controlled Loop
// Condition checked	      Before loop body	                        After loop body
// Execution of loop body	  May not execute if condition is false  	Executes at least once
// Examples	              for, while	                            do...while
// Control Flow	          Condition → Body	                        Body → Condition

