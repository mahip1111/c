// Another method of the above problem(using the functions)

#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("The factorial of %d is: %lld\n", n, factorial(n));

    return 0;
}

// #include <stdio.h>

// int factorial (int i){
//     if(i<0){
//         printf("The number is the negative number. ");
//     }
//     if(i==0 || i==1){
//         return 1;
//     }
//     else return i*factorial(i-1);
// }

// int main(){int n;
//     printf("Enter the number whose factorial you want to know: ");
//     scanf("%d",&n);
//     printf("The factorial of %d is %d",n,factorial(n));
//     return 0;
// }
