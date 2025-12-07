// Another way of 2afile.c

#include <stdio.h>

int main()
{
    FILE *ptr = fopen("harry.txt", "r");
    int num;
    fscanf(fopen("harry.txt", "r"), "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(fopen("harry.txt", "r"), "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(fopen("harry.txt", "r"));
    
    return 0;
}

// FILE POINTER:-
// A “FILE” is a structure which needs to be created for opening the file. 
// A file pointer is a pointer to this structure of the file.                                                                     
// (FILE pointer is needed for communication between the file and the program). 
// A FILE pointer can be created as follows: 
// FILE *ptr; 
// ptr = fopen("filename.ext"; "mode"); 

// FILE OPENING MODES IN C:-
//"r"   -> open for reading  
// "rb"  -> open for reading in binary  
// "w"   -> open for writing // If the file exists, the contents will be overwritten 
// "wb"  -> open for writing in binary 
// "a"   -> open for append // If the file does not exist, it will be created 