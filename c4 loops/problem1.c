/* Q:-Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
 counter is initialized to 0.*/

#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}

// #include <stdio.h>

// int main(){
//     int i=0;
//     while (i<=20 && i>=10)  // wrong bcz 0>=10 is false statement therefore condition goes false and thus loop start hi nahi hoga.
//     {
//         printf("%d",i);
//         i++;
//     }
    
//     return 0;
// }