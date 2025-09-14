// Q:- Write your own version of strlen function from <string.h>.

#include <stdio.h>

int strlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    { // Here c!=0 means ki jab null character aya tab loop se exit kar jao.
        // So means jab tum yahan par str[10] daloga which is null character then loop exit kar dega with i=11 and that is why ki apko count ma i-1 karna padh raha hai.
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}


int main()
{
    char str[] = "Harry bhai";

    printf("The number of characters in str string is:- %d", strlen(str));
    
    return 0;
}