// Q: what will happen if you donot use address of operator inside the scanf?

#include <stdio.h>

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",x);
    printf("%d",x);
    return 0;
}


// Note: formal argumeents are of two types : ordinary variable(used in the case of call by refrence) and pointer variable (used in the case of call by refrence.)

// Note: & is Address Operator or Address-of Operator
// * is Value-at Operator / Dereference Operator

// actually scanf workssimiar to the call by refrence and wo aap vizualize kar sakte ho like a function:
// void f2(int*p){
//     *p=6;
// }

// so if you donot use & inside the scanf then in that case it will show you the garbage value.

// DETAIL EXPLANATION OF WHAT IS HAPPENING IN THIS FULL CODE:
// Initially ek garbage vaule (or crash or undifined) hogi x ki and apna wahi scanf se pass karva di (bcz you don't use the & operator and thus user ka through di hui value ka koi meaning nahi hai) now usko scanf adress ki tarha lega and then usme user ke through diya hua adress store karna ki kochich karega and this is called as the "ILLEGAL MEMORY ACESS" bcz apna galat adress dala hai scanf ka andhar 

