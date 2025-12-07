// various methods of taking the input of the 2d matrix.

// the most easy one is the giving the value by yourself like: a[0][0]=1; a[0][1]=2; like this 

// ✅ 1. Normal Nested Loops (Most Common Method)
// #include <stdio.h>

// int main() {
//     int A[3][3];
//     int i, j;

//     printf("Enter elements:\n");
//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 3; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }

//     return 0;
// }

// ✅ 2. Input Row-wise in a Single Line

// Ek row ka input ek saath dena ho:

// 1 2 3
// 4 5 6
// 7 8 9

// for(i=0; i<3; i++){
//     printf("Enter row %d: ", i+1);
//     scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
// }

// ✅ 3. Using Pointer Notation (Address Based Input)

// Pointer logic samajhne ke liye useful:

// for(i=0; i<3; i++){
//     for(j=0; j<3; j++){
//         scanf("%d", (*(A + i) + j)); 
//     }
// }

// ✅ 4. Using a Single Pointer Variable

// 2D ko continuous 1D block treat karte hue:

// int *p = &A[0][0];

// for(i = 0; i < 9; i++){
//     scanf("%d", p + i);
// }

// ✅ 5. Taking Input Using a Function

// Clean aur reusable code ke liye:

// void input(int A[3][3]) {
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
// }

// ✅ 6. Dynamic Size (User-defined Size n×m)
// int n, m;
// scanf("%d %d", &n, &m);

// int A[n][m];    // VLA

// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         scanf("%d", &A[i][j]);
//     }
// }