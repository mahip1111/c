// Professional way to solve this problem is like:-

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = (num1 >= num2 && num1 >= num3) ? num1 :
                   (num2 >= num1 && num2 >= num3) ? num2 : num3;

    printf("%d is greatest\n", greatest);

    return 0;
}

// Agr apko ye nested ternary operator ka use samj nhi aya then go on the problem9b.c to solve the issue.

// There are other methods too to solve the same problem learn more and learn that methods too easily available on the chatgpt.