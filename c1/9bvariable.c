//  Another example:-

#include <stdio.h>

int main(){
    char word= '\n';    // NOTE:- We know that ki char sirf ek character hi leta hai ha apna andar but here \n also represent single character(\n= new line). Therefore aap jahan jahan word identifier ka use karoge wahn wahn new line ma text automatically chala jayega.
    printf("Hey I am good \\n nice");    // agr apko asli ma \n likhna hai tab ye karna hoga.
    printf("%c", word);
    printf("Thank you");
    return 0;
}