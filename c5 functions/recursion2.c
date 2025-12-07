// #include <stdio.h>

// int factorial(int);
//     // Factorial(5) = 1 X 2 X 3 X 4 X 5
//     // Factorial(4) = 1 X 2 X 3 X 4
//     // Factorial(3) = 1 X 2 X 3
//     // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
//     //  = 1 x 2 X 3 X .... X n-1

// int factorial(int n){ 
//     if(n == 1 || n == 0){ // Base condition
//         return 1;
//     }
//     // Factorial(n) = Factorial(n-1) X n
//     return n * factorial(n-1);
// }

// int main(){
//     int a = 6;
//     printf("The factorial of %d is %d", a, factorial(a));
//     return 0;
// }


#include <stdio.h>

unsigned long long int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    printf("Enter the number whose factorial you want: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("The factorial of the number entered by you is: %llu\n", factorial(n));
    // ye 100 factorial ka liya ans 0 dega bcz of the overflow hojayega data bcz llu cannot store that much of data.
    return 0;
}
