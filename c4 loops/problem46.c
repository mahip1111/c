// I
// IN
// IND
// INDI
// INDIA

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="INDIA";
    int i,j;
    int len;
    len=strlen(str);
    for ( i = 0; i < len; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
