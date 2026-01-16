// \b C language me backspace escape sequence hota hai.

// NOTE: \b cursor ko ek character left le jata hai (without deleting character in memory).

#include <stdio.h>

int main(){
    printf("AB\bc");
    return 0;
}

// 📌 Example 1
// printf("AB\bC");

// 🖥 Output:
// AC

// 🔍 Explanation:
// A print hua

// B print hua

// \b → cursor ek step left gaya (B ke upar)

// C ne B ko overwrite kar diya


// 📌 Example 2
// printf("Hello\b\bHi");

// 🖥 Output:
// HelHi

// 🔍 Explanation:

// Hello print hua

// 2 backspace → o aur l ke upar cursor aaya

// Hi ne unko replace kar diya

// ⚠ Important Points

// \b character delete nahi karta, sirf cursor move karta hai

// Output terminal/console pe depend karta hai

// File me output likhne par (fprintf to file), \b ka koi visible effect nahi hota

// 🧠 Yaad rakhne ka trick

// \n → new line

// \t → tab

// \b → backspace (left move)

// Agar chaho to mai exam-oriented examples ya MCQ type questions bhi kara sakta hoon 😉