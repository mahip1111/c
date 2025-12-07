// difference btw sentinel and counter control loop.

// Sentinel-Controlled Loop
// A sentinel-controlled loop runs until a special value (called a sentinel) is encountered.
// The sentinel is a value that does not belong to the normal data and is used to signal the end of input.
// We do not know the number of iterations in advance; it depends on the input.

// Example: Sum of numbers entered by the user, stopping when the user enters -1 (sentinel).
// #include <stdio.h>

// int main() {
//     int num, sum = 0;

//     printf("Enter numbers to sum (-1 to stop):\n");
//     scanf("%d", &num);

//     while (num != -1) {  // sentinel check
//         sum += num;
//         scanf("%d", &num);
//     }

//     printf("Sum of numbers = %d\n", sum);
//     return 0;
// }
// Explanation:
// The loop continues until the user enters -1.
// -1 acts as the sentinel value.
// You cannot predict how many numbers the user will enter, so the loop is data-driven.

// 2. Counter-Controlled Loop
// A counter-controlled loop runs for a fixed number of times.
// We know the number of iterations in advance.
// Usually, a counter variable is used to control the loop.

// Example: Print numbers from 1 to 5 using a counter-controlled loop.
// #include <stdio.h>

// int main() {
//     int i;

//     for (i = 1; i <= 5; i++) {  // counter-controlled loop
//         printf("%d\n", i);
//     }

//     return 0;
// }
// Explanation:
// The loop runs exactly 5 times, controlled by the counter i.
// Counter-controlled loops are predictable and ideal when the number of repetitions is known.
// ✅ Key Differences:
// Feature	Sentinel-Controlled	Counter-Controlled
// Number of iterations	Unknown	Known
// Loop ends when	Sentinel value is reached	Counter reaches limit
// Example	Input numbers until -1	Print 1 to 5