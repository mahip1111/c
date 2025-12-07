#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");

    if(ptr == NULL ){           // tis line is used to know ki file exist karti hai ki nahi.
        printf("The file does not exist sorry! \n");
        
    }

    else{
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    
    }
    return 0;
}

// fclose(ptr) use karne se kya hota hai ki aap file ko free kar deta ho means ki abh file delete ho skti hai ya kai aur run ho sakti hai and similar tasks.
// Basically this will tell the compiler that we are done working with this file and the associated resources could be freed. 