// A structure is somewhat like an array, but instead of storing only similar data types, it can store a collection of dissimilar data types under one name.

// A structure in C is a user-defined data type that allows you to group variables of different data types under a single name.

// Example of structure:-

#include <stdio.h>
#include <string.h>    // To get the acess of strcpy().

// Define a structure
struct Student {
    int roll;
    char name[50];
    float marks;
};                 // Apko jab bhi structure bnana hai main fxn. se pehla bna lena hai.

int main() {
    struct Student s1; // Declare a structure variable with name s1

    // Assign values to the s1.
    s1.roll = 101;      // You need to use dot to acess the members of the structure 
    s1.marks = 89.5;
    strcpy(s1.name, "Rahul");  // reason iske next file ma hai.

    // Print values
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

// Q:- WHY USE STRUCTURES?
// Ans:- a. Structures keep the data organized. 
// b. Structures make data management easy for the programmer.

// see about the object and classes here.

// Structure variables: Declaration, Initialization and Accessing
