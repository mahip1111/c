// various ways of intializing a 2d array:

// ✅ 1. Normal Initialization (Row-wise)
// int arr[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// ✅ 2. Initialization Without Braces (Row-wise automatically)
// int arr[3][3] = {
//     1, 2, 3,
//     4, 5, 6,
//     7, 8, 9
// };

// ✅ 3. Partial Initialization (Baaki elements auto 0)
// int arr[3][3] = {
//     {1, 2},
//     {4},
//     {7, 8, 9}
// };


// Baaki empty places = 0.

// ✅ 4. Initialize Only Few Rows
// int arr[3][3] = {
//     {1, 2, 3}
// };


// Remaining rows become 0.

// ✅ 5. Let Compiler Decide Column Size

// Column size required hai, row optional hai.

// int arr[][3] = {
//     {1, 2, 3},
//     {4, 5, 6}
// };

// ✅ 6. Using a 1D Array to Fill 2D

// Compiler row-major order follow karega:

// int arr[2][4] = {1,2,3,4,5,6,7,8};

// ✅ 7. Designated Initializers (C99 Feature)

// Specific cell initialize karna ho toh:

// int arr[3][3] = {
//     [0][2] = 5,
//     [2][1] = 9
// };


// Baaki sab 0 ho jayega.

// ✅ 8. Runtime Input + Initialization (Manual Input)
// int arr[3][3];
// for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 3; j++){
//         scanf("%d", &arr[i][j]);
//     }
// }