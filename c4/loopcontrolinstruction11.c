#include <stdio.h>

int main(){ 
    int n = 12;
    for (int i=n; i ; i--){
        printf("%d\n",i); 
    }
        
    return 0;
}
// In your case:- 
1. you did initialization process which you are clear
2. you set the condition as i means i ha jo agr true hai toh hi loop continue hoga,
3. you did decrement.
now since the loop is decrementing the time will come when 1 become 0 and when the i will become 0 the condition i itself will go false and thus it exits the loop 
That is why you are getting the ans as 12-1.
