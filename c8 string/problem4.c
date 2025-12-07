// Q:-  Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>


char* slice(char str[], int m, int n){
    int i=0, count;  
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;       // or you can write str[0]=ptr1
    str[n] = '\0';
    return str;

}
int main(){
    char str[] = "Harry bhai";
    
    printf("%s", slice(str, 2, 7));

    // Basically huha kya ki apna str=ptr1 kiya tabh index 2 = index 0 ho gya and thus index 6 par ayega a and index 7 par fir apna null character dal diya. and thus ans will be 'rry bha'
    return 0;
}