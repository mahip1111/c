// WRONG METHOD:
// int i = 4;  
// int arr[i] = {1, 2, 3, 4};  // Variable Length Arrays (VLA) cannot be initialized at declaration

// INSTED YOU CAN GO LIKE:
    // int i = 4;    // YOU CAN TAKE THIS i AS A INPUT FROM THE USER.
    // int arr[i];   // VLA(VARIABLE LENGTH ARRAY) allowed
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // (or you can take all these elements with the help of loop.)

// In C, array size must be a compile-time constant for initialization. Variable Length Arrays cannot be initialized at declaration but can be assigned values later.


//Is line ka simple matlab samjho : “In C, array size must be a compile-time constant for initialization.”

// Jab tum array declare + initialize karte ho (same line me values dete ho),
// toh array ka size pehle se fixed hona chahiye,
// aur compiler ko compile time par hi pata hona chahiye.

// 🔹 Compile-time constant kya hota hai?
// Aisi value jo program compile hote waqt hi known ho.

// ✅ Compile-time constants (ALLOWED): 

// #define N 4
// int arr[N] = {1,2,3,4};

// enum { M = 5 };
// int b[M] = {1,2,3,4,5};

// int c[3] = {10, 20, 30};


// ❌ Not compile-time constants (NOT ALLOWED): 

// int n = 4;
// int arr[n] = {1,2,3,4};   // ❌ wrong

// const int n = 4;
// int arr[n] = {1,2,3,4};   // ❌ still wrong in C
// 📌 Kyun?
// ➡️ n ki value run time par decide hoti hai, compile time par nahi.

// NOTE: Compile time par sirf wahi values known hoti hain jo compile-time constants hoti hain (jaise literals, #define, enum).Jo values variables se aati hain ya user input se milti hain, wo run time par known hoti hain.

// LITERALS IN C ARE: Literals are constant values that are directly written in the source code and do not change during program execution. example: 1,2.4,\n,'a',"hello world".
