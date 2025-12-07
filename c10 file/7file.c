#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1)   // means loop is infinite
    {
        ch = fgetc(ptr); 
        printf("%c", ch);
        if (ch == EOF)     // EOF= end of file 
        {
            break;
        }
    }
        return 0;
}

// Q:- What we did here?
//Ans:- 1. we make ch name ka character variable
// 2. File open ki
// 3. infinite while loop chalaya
// 4. fir character by character print karne ko kaha loop ma
// aur if(ch=EOF){break;} se ye bta diya ki jab end wala charcter aa jayega file ka toh loop se bahar aa jao.