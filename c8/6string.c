#include <stdio.h>

int main()
{
    char st[30];
    gets(st);

    printf("%s", st);
    // puts(st);       // agr aap yahn puts ka bajaye prinf se string ko prin karta ho then jo "hey" ha wo same line ma aa jayega but agr aap puts ka use kartta ho then in that case hey next line ma print hoga bcz puts print karna ke badh cursor ko next line ma le jata ha.
    
    printf("hey");

    return 0;
}