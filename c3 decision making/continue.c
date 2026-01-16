#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++)   //try to do this with while loop
    {
        if (i % 2 == 0) 
        {
            printf("Gourav\n");
            continue;  // skip even numbers
        }
        
        printf("value of i=%d\n ", i);
    
    }
    return 0;
}