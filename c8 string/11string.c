// STRCMP()
// This function is used to compare two strings. It returns 0 if the strings are equal, a
// negative value if the first string's mismatching character's ASCII value is less than the
// second string's corresponding mismatching character, and a positive value otherwise.

// ASCII value aap net se dekh lena.

#include <stdio.h>
#include <string.h>

int main()
{
    int a = strcmp("far", "joke"); // Negative value 
    printf("%d\n", a);             // (bcz f pehla ata hai j ka in ascii dictionary.)
    int b = strcmp("ram", "ar");  // Positive value
    printf("%d\n", b);              // (bcz a pehla ata hai r ka in ascii dictionary.)
    int c= strcmp("ram", "ram");  // OUTPUT=0
    printf("%d\n",c);  // (bcz both the strings are same )
    return 0;
}

// strncpy(char *s2, char *s1, int len) --> Copy substring of size len starting from s1 character pointer into s2
// iske bare ma fir kabhi dekhna.