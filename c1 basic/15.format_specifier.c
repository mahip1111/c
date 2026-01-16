#include <stdio.h>

int main(){
    float k=23.5;
    printf("%f\n",k);  // 23.5
    printf("%d\n",k);  // undefined behaviour (in your case 0 bcz of incorrect format specifier)
    printf("%c\n",k);  // undefined beahvior (in your case " " bcz of character as incorrect format specifier)
    printf("%d\n",k);  // undefined behaviour (0 bcz of incorrect format specifier)
    return 0;
}

// NOTE: printf ke andar jab value pass hoti hai, to float → double me promote ho jaati hai (called default argument promotion)