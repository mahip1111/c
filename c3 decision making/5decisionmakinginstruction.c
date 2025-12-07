// ELSE IF CLAUSE  
// Instead of using multiple if statements, we can also use else if along with it thus forming 
// an if-else if-else ladder. 

#include <stdio.h>

int main(){
    int age = 65;
    if(age>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age>40){
        printf("You can drive and you are elder\n");
    } 
    else if(age>18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}

// Q:- WHAT IS THE DIFFERENCE IN USING IF AND ELSE IF FXN.
// ANS:- see agr apna 2 if use kiya and wo dono sahi hai then in that case wo dono chalenga but agr apna 1 if and 1 else if use kiya then koi ek hi chalega. You can observe it by cahnging any one of else if by if in above code.

// IMPORTANT NOTE 
// 1. Using if-elseif-else reduces indents. 
// 2. The last “else” is optional. 
// 3. Also there can be any number of “else if”. 
// 4. Last else is executed only if all conditions fail.