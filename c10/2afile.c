#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    
    return 0;
}


// FILE *ptr;
// In C, files are handled using pointers to a special structure called FILE (defined in stdio.h).
// FILE *ptr; creates a pointer variable ptr which will point to the file information (file name, location, buffer, etc.) once it is opened.
// Think of FILE *ptr as a "reference" to the file.

// ptr = fopen("harry.txt", "r");
// Here ptr is reperesenting a open file harry.txt and here fopen is used to topen this file in read mode.

// int num;
// fscanf(ptr, "%d", &num);
// Here apna int num ka ek variable ban liya hai.
// Fir apna fscanf ki help se ptr ko point kiya and apna fsacf ko kaha ki integer lao ptr se and uski value num name ke identifier ma stire kar doh.

// fscanf(ptr, "%d", &num);
// Now jab aap dubara se fscanf use karoge then ise bar apko file ma jo agla integer hoga wo print hoga par ye tabhi hoga jab apki files ma apna sare gap de de kar integers hi dala honga par agar apna bich ma kahin bhi int ya float ke ilawa koi aur data type dal diya then in that case jahan tak integer ya float honga wo int datatype ki form ma print hota rahenga par uska badh ma aap jitni bari fsanf use karoge last wala number print hota rahega. "You can see this on 2bfile.c"

// fclose(ptr);
// This will simply close the file.

