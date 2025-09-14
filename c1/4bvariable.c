// Q:- Write a code in which you can know ki tumhara name ka pehla alphabet kya hai?

#include <stdio.h>

int main(){
    char Name;
    printf("Enter your name:-");
    scanf("%c", &Name);
    printf("your name starts with %c", Name);
    return 0;

}

// In C, there is no built-in string variable type like in higher-level languages such as Python or Java. However, strings are represented using arrays of characters (char arrays) terminated by a null character ('\0')  [This topic will be discussed later in the chapter.]. Thus here automatically apka name ka first alphabet hi print hoga.