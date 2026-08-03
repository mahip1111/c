// What is the difference between the following two commands? 
// printf(“ * ”)
// printf(“ \* ”)

#include <stdio.h>

int main(){
    
    printf("*");  // *
    printf("\*");   // * or show you the warning and print the * bcz the \* is not the escape sequence character therefore compiler isa * hi man leta hai but some compilers print it the warning as shown in your case.
    return 0;
}

// 🔑 Final Conclusion

// 👉 Dono ka output same hota hai (*)
// 👉 Difference sirf itna hai:

// * → correct & recommended

// \* → unnecessary, sometimes compiler warning de sakta hai


