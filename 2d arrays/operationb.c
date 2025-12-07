// to calculate the sum of the diagonal elements of the given 2d array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of matrix (n): ");
    scanf("%d", &n);

    int a[n][n];

    // ---- Input ----
    printf("Enter the elements of %d x %d matrix:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // ---- Output ----
    printf("\nThe %d x %d matrix is:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // ---- Sum of Diagonal Elements ----
    int diagSum = 0;
    for(int i = 0; i < n; i++) {
        diagSum += a[i][i];   // only diagonal elements (i == j)
    }

    printf("\nSum of diagonal elements = %d\n", diagSum);

    return 0;
}

// (i) Primary diagonal

// Positions: (0,0), (1,1), (2,2), ...

// sum += a[i][i];

// (ii) Secondary diagonal

// Positions: (0,n-1), (1,n-2), ...

// sum += a[i][n-i-1];

