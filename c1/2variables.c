// Syntax of Declaring a Variable:-  (data_type), (variable_name);

//  You can also assign a value at the time of declaration:- data_type variable_name = value;

// EXAMPLE:- int age = 20; float temperature = 36.5; char grade = 'A'

// Various types of data types in python are:- int, float, char, bool, void.
// 
// Rules for Naming Variables:-
// 1.The name must begin with a letter (A-Z or a-z) or an underscore _.
// 2.After the first letter, you can use letters, digits (0-9), and underscores.
// 3.No special characters (like @, $, #) are allowed.
// 4.No spaces in variable names.
// 5.A variable cannot be a reserved keyword (like int, float, if, etc.).
// 6.Examples of valid names: x, count, total_marks, _temp
// 7.Examples of invalid names: 2age, my name, float

#include<stdio.h>

int main(){
    int a; // Variable declaration
    a = 6; // Variable initialization (giving value to a)
    printf("The output of this program is %d", a);   
    return 0;
}
// NOTE:- In printf(): %d tells the compiler to expect an int (integer) variable and to print its value in decimal (base 10) format.
// NOTE:- IN scanf: %d tells the compiler to read an input and store it as an int type.

// NOTE:- You can initialize the variable at the time of declaration.
