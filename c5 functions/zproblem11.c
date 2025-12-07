//Q: Write a function that takes a character and returns whether it’s a vowel or consonant.

#include <stdio.h>

void checkVowelOrConsonant(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        // Convert the character to lowercase so that input becomes case-insensitive
        ch = ch + 32;  
        // Convert uppercase to lowercase (ASCII concept)
    }

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("It is a vowel.\n");
    } 
    // Check if the character is between 'a' and 'z' → meaning it is an alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a consonant.\n");
    } 
    else {
        printf("Invalid input! Not an alphabet.\n");
    }
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    checkVowelOrConsonant(c);

    return 0;
}
