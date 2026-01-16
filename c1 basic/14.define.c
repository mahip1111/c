// define is a preprocessor directive and almost similar to type def.

// #define automatically datatype detect nahi karta.
// #define C ka preprocessor directive hai Ye sirf text replacement karta hai, datatype ka concept hi nahi hota

// WHAT ACTUALLY HAPPENS HERE IS:
// Compiler se pehle hi preprocessor na macro ki value ko change kar diya("macro" matalb ki value ko bol raha jo compile time sa pehla pura function ma replace ho rahi hai)

// printf("%d", X);

// ko change kar deta hai:

// printf("%d", 10);

// NOTE:👉 Datatype tab decide hota hai jab value kisi variable me jaati hai, na ki #define ke time.

#include <stdio.h>
#define sum(x) x + x // yad rakhna yahan par ; nahi ata hai end ma nahi toh error show hoga.
// #define sum(x) (x + x)     // better way
// #define sum(x) ((x)+(x))   // correct way reason told down
int main()
{
    printf("%d", 10*sum(5));  // 55   bcz 10*x + x  to avoid this thing you need to put brackets outside the expression in define.
    return 0;
}

// common ways jo muja samaj ma aya define usa karna ka (there are others too which i will explore later.)

// 1️⃣ Constant define karna (Most common use)
// #define PI 3.14159
// #define MAX 100
// 👉 Value fixed hoti hai, datatype nahi hota.
// Use: float area = PI * r * r;


// 2️⃣ Macro with expression
// #define SQR(x) x*x
// ❌ Problem: SQR(2+3)   // 2+3*2+3 = 11 (wrong)

// ✅ Correct way: #define SQR(x) ((x)*(x))


// 3️⃣ Function-like macros
// #define ADD(a,b) ((a)+(b))
// #define MAX(a,b) ((a)>(b)?(a):(b))

// Use: int m = MAX(5,10);


// 4. String macros
// #define MSG "Welcome to C Programming"


// 5. Macro for array size
// #define SIZE 10
// int arr[SIZE];

// 1️⃣1️⃣ #undef (macro remove karna)
// #define TEMP 25
// #undef TEMP


// 1️⃣2️⃣ Predefined macros (built-in)
// __DATE__
// __TIME__
// __FILE__
// __LINE__

// Example:

// printf("File: %s Line: %d", __FILE__, __LINE__);


// ⚠️ Important caution of #define:

// Type checking nahi

// Debugging mushkil

// Side effects ho sakte hain

// ✅ Prefer:

// const

// inline functions


// symbolic constants are generally written in upper case so that they are easily distinguished from lowercase variable names.

