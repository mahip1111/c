// Q: Write a function in c to find the number of digits in the number enterd by the user.
// NOTE: Your this code will run only for the positive and number =0 only.

#include <stdio.h>

int nd(int num){
    int count = 0;
    
    if (num == 0)  // comparison, not assignment
        return 1;
    
    while (num) {
        num = num / 10;
        count++;
    }
    
    return count; 
}

int main(){
    int num;
    printf("Enter a number to find its number of digits: ");
    scanf("%d", &num);
    
    printf("The number of digits in the number you entered is: %d\n", nd(num));
    
    return 0;
}
