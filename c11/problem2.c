// Q:- Use the array in problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the value of the elements of the array:-\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d:- ", i);
        scanf("%d", &ptr[i]);
    }

    printf("The valus of the elemnets of the array is :-\n");

    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d \n",i, ptr[i]);
    }

    return 0;
}