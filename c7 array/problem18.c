// Q: If an array arr contains n elements, then check if the given array is a palindrome or not

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1;   // Assume palindrome initially

    // Check palindrome
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        if(arr[i] != arr[j]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if(isPalindrome)
        printf("The array is a Palindrome.\n");
    else
        printf("The array is NOT a Palindrome.\n");

    return 0;
}
