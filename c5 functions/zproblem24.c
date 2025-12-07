// Q: Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * * 

#include <stdio.h>

// Function to print the pattern
void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;   // Odd number of stars
        for(int j = 1; j <= stars; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    printPattern(n);
    
    return 0;
}
