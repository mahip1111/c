// Concept of passing an array to the function.

// Syntax of passing array to a function:

// Option 1: Using array notation
// void display(int arr[], int size)

// Option 2: Using pointer notation
// void display(int *arr, int size)

// Both are same because arr is treated as a pointer to the first element.

// Simple example of printing array using the function:

#include <stdio.h>

void display(int arr[], int size) {     // you will take the base adress and the size of the array by the user
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    display(numbers, size);

    return 0;
}
