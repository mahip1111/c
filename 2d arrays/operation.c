// addition, transpose, mutiplication of matrix.
// do all these operations using the function once.

#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], t[3][3];
    int i, j, k;

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    // Addition
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j] = a[i][j] + b[i][j];

    // Transpose of A
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            t[j][i] = a[i][j];

    // Multiplication A × B
    int m[3][3] = {0};
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                m[i][j] += a[i][k] * b[k][j];

    // Display results
    printf("\nAddition of A and B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    printf("\nTranspose of A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    printf("\nMultiplication of A and B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
