// Modifying array in a funciton.

#include <stdio.h>

void change(int arr[], int size) {
    arr[0] = 999;  // Changing first element
}

int main() {
    int a[] = {1, 2, 3};
    change(a, 3);

    printf("%d", a[0]);  // It will print 999
    return 0;
    
}
