#include <stdio.h>

int main() 
{
// partial initialization. Rest becomes 0 for numeric and '\0' for char
int a[5] = {1, 2}; 
int c[5] = {'1', 'f'};

//auto initialization of array size
int D[] = {10, 20, 30};
//int D1[]; // not allowed as computer needs to know the size of the array

//printing array values

printf("%d\n", A1[0]);
printf("%d\n", A1[1]);
printf("%c\n", C[2]);
printf("%d\n", A1[5]); //garbage value

// multi-dimensional arrays

int m[2][3] = {{4,5,2}, {14,5,1}}; // A 2 x 3 matrix

//printing tables or matrices
//        4    5   2
//        14   5   1      

for (i=0; i<2; i++)
{
        for (j=0; j<3; j++)
        {
            printf("%d \t", m[i][j]);
        }
    printf("\n");
}

float table[2][3] = { 0.1 ,0.1 ,0.1 , 1, 1, 1 };
printf("%d",table[1][1]);
int table2[2][3] = {{2}, {5}};

for (i=0; i<2; i++)
{
        for (j=0; j<3; j++)
        {
            printf("%d \t", table2[i][j]);
        }
    printf("\n");
}

}
