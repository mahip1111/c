// Q:- Write a code using the function in c to verify whether the number entered by the user is even or odd?

// #include <stdio.h>

// int eo(int a){
//     if(a%2==0){
//         printf("The number is even.");
//     }
//     else{printf("The number is odd");}
//     return 0;
// }

// int main(){ int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     eo(n);
    
//     return 0;
// }

// MORE CLEAN CODE IS:-

#include <stdio.h>

int isEven(int a) {
    return (a % 2 == 0);  // returns 1 if even, 0 if odd
    // jab true hoga toh ye 1 dega and jab false hoga tab 0 dega.
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isEven(n))
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}


