// A pointer is a variable which stores the address of another variable.

#include <stdio.h>

int main(){
    int i = 72;            // jabh bhi hum int i=72 likhta hai ram(random acess memory) ka andar ek adress ma jakar ye value store ho jati hai.
    // Abh agr huma aisa variable chahiye jo ki ise adreess ko store kare usa kehta hai pointer.
    int* j = &i;          // j is a pointer pointing to i (j is an integer pointer)  (Means j i ka adress store kar raha hai.)
    int**k = &j;          // This is called as pointer to pointer adress store karna.  // and will tell the adress of the j

    printf("The address of i is %p\n", &i);  // This will tell you the adress of the i.
    printf("The address of i is %p\n", j);   // This will also tell you the adress of the i.
    printf("The address of i is %p\n",*(&j)),  // This will also tell you te adress of the i.

    printf("The value at address j is %d\n", *(&i));  // THis will give you value at adress j.
    printf("The value at address j is %d\n", *j);     // THis will also give you value at adress j.

    printf("The adress of j is %p\n", &j);    // This will tell you the adress of j.
    printf("The adress of j is %p\n",k);      // This will also tell you the adress of j
    return 0;
}

// Note:- * puch raha hai kya value hai and & puch raha hai kya adress hai
// NOTE:- Both * and & are anti of each other.(i.e they cancel each other.)

// Note:- %p is the format specifier in printf and scanf for pointer.
// Agr aap adress of variable integers ki form ma dekhna chahta ho then use %u as a format specifier of pointers

// NOTE:- pointer variable also has their own adress.

// The address of a variable in C (or C++) is not always fixed — it depends on where the variable is stored:
// Global/Static: fixed address throughout execution.
// Local (automatic): fixed only during function execution, may change in next call.
// Dynamic: decided at runtime, not fixed.
// INe sab ke bare ma aap badh me padh lena.

// POINTER TO A POINTER:- 
// Just like ‘j’ is pointing to ‘i’ or storing the address of ‘i’, we can have another variable k 
// which can further store the address of ‘j’.
// We can even go further one level and create a variable ‘l’ of type int*** to store the address of ‘k’.

// NoTe:- Jo ye order ha ye contiguous blocks ma store hota hai jaise ki agr i ka adress 674 ha then j ka adress 678 ho jayega (my compiler is taking 4 byte space for integer) or vice versa.

// see ye jo contiguous blocks ke clarity ke liya apko %u ka use karna hoga taki aap saf saf dekh sako ki kitni values ka diferrence hai two continuous adresses ma.