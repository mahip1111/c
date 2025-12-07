// NOTE: 2 dimensional array is also called as matrix.

// in 1d array you can acess the marks of the students in 1 subject but with the help of the 2d arrays you can acess the marks of the students at the different subjects which you want.

// Declaration of 2d array:   // deal with all the methods on the gpt

// 1. Normal (Static) Declaration – Fixed Size
// int arr[3][4];

// ⭐ 2. Declaration With Initialization
// int arr[3][3] = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };

// ⭐ 3. Partial Initialization
// int arr[3][3] = {
//     {1,2},
//     {3},
//     {4,5,6}
// };
// ➡️ Baaki bache huye elements automatically 0 ho jayenge.

// ⭐ 4. Skip Row Size (Compiler Calculates Columns)
// int arr[][3] = {
//     {1,2,3},
//     {4,5,6}
// };
// ➡️ Rows auto calculate ho jayenge (2 rows).
// ⚠️ Columns compulsory hai.

// ⭐ 5. One Line Initialization
// int arr[2][2] = {1,2,3,4};



// ISKA NICHA WALA METHODS SAMAJ ME NAHI AYA INHA SAMJO.

// ⭐ 6. Using Pointers (Pointer to Array)
// int arr[3][4];
// int (*p)[4] = arr;
// ➡️ p ek pointer hai jo 4-integer array ko point karta hai (i.e. rows ko point karta hai).

// ⭐ 7. Dynamic Allocation (malloc)
// (a) Single Block Allocation
// int *arr = malloc(3 * 4 * sizeof(int));


// Access:

// arr[i*4 + j];

// (b) Double Pointer Allocation
// int **arr = malloc(3 * sizeof(int*));

// for(int i=0; i<3; i++)
//     arr[i] = malloc(4 * sizeof(int));

// ⭐ 8. Using typedef
// typedef int Matrix[3][3];

// Matrix m = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };

// ⭐ 9. Variable Length Array (VLA) – Runtime Size
// int r, c;
// scanf("%d %d", &r, &c);

// int arr[r][c];


// ➡️ C99 feature: runtime par size decide hota hai.

// ⭐ 10. Array of Pointers
// int r1[] = {1,2,3};
// int r2[] = {4,5,6};

// int *arr[2] = {r1, r2};

