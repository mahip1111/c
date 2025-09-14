// Taking input from the user to print the string.

#include <stdio.h>

int main(){
    char st[4];    // cahr st[4] means ki ye 4 characters le sakta hai par string sirf 3 ki banegi bcz 4th wala character null character hoga.
    printf("Write the string with 3 characters only ");
    scanf("%s", st);   // yahan par we dont use &st bcz  st= &st[0] therefore apko apna se & lgana ki yaha  par jarurt nhi hai.

    printf("%s", st);

    return 0;
}

//NOTE:- scanf cannot be used to input multi-word strings with spaces. For this you need to use get().
// NOTE:- scanf automatically adds a null character when the enter key is pressed. 
// NOTE:- printf can print the muti word string.