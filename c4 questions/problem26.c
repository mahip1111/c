// write a c program to find the number enterd by the user is even or odd withut using the "%" operator.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num / 2;   // 79/2=39

    if (result * 2 == num)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}

// there is also an method using the bitwise operator wo jab sekho ga tabh karna.