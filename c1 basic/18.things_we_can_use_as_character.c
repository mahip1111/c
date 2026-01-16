// C language me character ki tarah (character-type / character data) hum kaafi cheezon ko treat kar sakte hain. Simple Hinglish me samjho 👇

// 1️⃣ char data type (Direct character)

// Sabse basic cheez.

// char ch = 'A';
// char x = '5';
// char sym = '@';


// ✔ Letters
// ✔ Digits (as character)
// ✔ Special symbols

// Note: Single quotes ' ' hamesha character ke liye use hote hain.

// 2️⃣ Integers as characters (ASCII ki wajah se)

// C me har character ka ek ASCII value hota hai, isliye int ko bhi character ki tarah treat kar sakte hain.

// int a = 65;
// printf("%c", a);   // Output: A


// 👉 65 → 'A'
// 👉 97 → 'a'

// 3️⃣ Character as Integer

// Ulta bhi possible hai — character ko number ki tarah.

// char ch = 'A';
// printf("%d", ch);   // Output: 65

// 4️⃣ Digits as characters

// Digit number aur digit character alag cheez hoti hai.

// char d = '7';
// printf("%d", d);   // Output: 55 (ASCII of '7')


// ✔ '7' → character
// ❌ 7 → integer

// 5️⃣ String ke characters

// String actually characters ka array hota hai.

// char str[] = "HELLO";
// printf("%c", str[0]);  // H
// printf("%c", str[4]);  // O


// 👉 Har element ek character hai

// 6️⃣ Special / Escape characters

// Ye bhi characters hi hote hain.

// char n = '\n';   // newline
// char t = '\t';   // tab
// char b = '\b';   // backspace

// 7️⃣ Characters via pointers

// Pointer se bhi character treat ho sakta hai.

// char ch = 'A';
// char *p = &ch;
// printf("%c", *p);   // A