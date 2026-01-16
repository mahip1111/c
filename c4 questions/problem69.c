// Write a code to know whether the sequence entered by the user is an ap or not ?

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the sequence: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d terms of the sequence: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int d = arr[1] - arr[0]; // find common difference
    int isAP = 1; // assume it is an AP

    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != d) {
            isAP = 0; // not an AP
            break;
        }
    }

    if (isAP)
        printf("The given sequence is an Arithmetic Progression (AP).\nCommon difference = %d\n", d);
    else
        printf("The given sequence is NOT an Arithmetic Progression (AP).\n");

    return 0;
}
