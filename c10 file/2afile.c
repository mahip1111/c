#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  // 432

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  // 56

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  //56

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);  //56
    
    fclose(ptr);
    
    return 0;
}


// FILE *ptr;
// In C, files are handled using pointers to a special structure called FILE (defined in stdio.h).
// FILE *ptr; creates a pointer variable ptr which will point to the file information (file name, location, buffer, etc.) once it is opened.
// Think of FILE *ptr as a "reference" to the file.

// ptr = fopen("harry.txt", "r");
// Here ptr is reperesenting a open file harry.txt and here fopen is used to open this file in read mode.

// int num;
// fscanf(ptr, "%d", &num);
// Here apna int num ka ek variable bna liya hai.
// Fir apna fscanf ki help se ptr ko point kiya and apna fscanf ko kaha ki integer lao ptr se and uski value num name ke identifier ma stire kar doh.
// fclose(ptr);
// This will simply close the file.

// If the file contains something other than an integer (like a char or string), then:
// fscanf() fails to read it
// It does not change num
// The return value of fscanf() becomes 0 or EOF
// So if you print num, it will show the previous successfully read value (not repeated reading, just unchanged value)

// here harry.txt ko read kiya pehle 432 read hua then 56.7 ka 56 read hua and then .7 buffer ma chala gya now next bar jab aap num read karoga then .7 will be readed which is not a valid integer so fscanf fails and doesnot change the num