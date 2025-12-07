// Comparison of two pointers
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = &arr[1];
    int *p2 = &arr[3];

    printf("The value of p1 is %d\n", p1);

    printf("The value of p2 is %d\n", p2);

    if (p1 < p2)
    {
        printf("p1 comes before p2\n");
    }

    else{
        printf("p2 comes before p1\n");
    }

    return 0;
}