// Q: If an array arr contains n elements, then check if the given array is a palindrome or not
#include <stdio.h>

void palindrome(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int ispalindrom = 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            ispalindrom = 0;
            break;
        }
        start++;
        end--;
    }

    if (ispalindrom == 0)
        printf("Array is not palindrome");
    else
        printf("Array is palindrome");
}

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    palindrome(arr, 5);
    return 0;
}
