// various methods to print the 2d array.

// ✅ 1. Normal Nested Loop Method

// Sabse common method.

// for(int i = 0; i < rows; i++){
//     for(int j = 0; j < cols; j++){
//         printf("%d ", arr[i][j]);
//     }
//     printf("\n");
// }

// ✅ 2. Using a Function

// Array ko function me pass karke print karna.

// void printArray(int arr[][3], int r, int c){
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// Call:

// printArray(arr, 3, 3);

// ✅ 3. Using Pointer Notation (*(*(arr+i)+j))
// for(int i = 0; i < r; i++){
//     for(int j = 0; j < c; j++){
//         printf("%d ", *(*(arr + i) + j));
//     }
//     printf("\n");
// }


// Iska concept:

// arr + i → row ka address

// *(arr + i) → poori row

// *(arr + i) + j → element ka address

// *(*(arr + i) + j) → element value

// ✅ 4. Using Pointer to Row (arr[i] + j)
// for(int i = 0; i < r; i++){
//     for(int j = 0; j < c; j++){
//         printf("%d ", *(arr[i] + j));
//     }
//     printf("\n");
// }

// ✅ 5. Using Single Pointer (Flattened Index)

// Agar array memory me continuous stored hai:

// int *p = &arr[0][0];
// for(int i = 0; i < r * c; i++){
//     printf("%d ", *(p + i));
// }


// Line by line print karna ho:

// int *p = &arr[0][0];
// for(int i = 0; i < r; i++){
//     for(int j = 0; j < c; j++){
//         printf("%d ", *(p + (i*c + j)));
//     }
//     printf("\n");
// }

// ✅ 6. Using arr[i][j] Shortcut

// Simple aur readable:

// for(int i = 0; i < r; i++){
//     for(int j = 0; j < c; j++){
//         printf("%d ", arr[i][j]);
//     }
//     printf("\n");
// }

// ✅ 7. Using while loops
// int i = 0, j = 0;
// while(i < r){
//     j = 0;
//     while(j < c){
//         printf("%d ", arr[i][j]);
//         j++;
//     }
//     printf("\n");
//     i++;
// }

// ⭐ Bonus (Most Important Exam Point)

// 2D array ko print karne ke 4 pointer-based forms:

// arr[i][j]

// *(arr[i] + j)

// *(*(arr + i) + j)

// (*(arr + i))[j]