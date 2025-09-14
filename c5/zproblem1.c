// Q:-  Write a program with three functions 
// 1. Good morning function which prints “good morning”. 
// 2. Good afternoon function which prints “good afternoon”. 
// 3. Good night function which prints “good night”. 
// main() should call all of these in order 1→2→3

#include <stdio.h>

void Good_morning(){
    printf("good morning\n");
}

void Good_afternoon(){
    printf("good afternoon\n");
}

void Good_night(){
    printf("good night\n");
}

int main(){
    Good_night();
    Good_afternoon();
    Good_night();
    
    return 0;
}