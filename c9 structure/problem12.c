// Q: Create a structure type ‘Person’ with name, salary and age as its attributes. Declare and initialize 2 variables for this. Print the name of first person and age of the other.

#include <stdio.h>

struct Person {
    char name[30];
    float salary;
    int age;
};

int main() {
    // Declaring and initializing two variables of structure Person
    struct Person p1 = {"Rahul", 55000.50, 28};
    struct Person p2 = {"Amit", 62000.75, 32};

    // Printing the name of first person and age of second person
    printf("Name of first person: %s\n", p1.name);
    printf("Age of second person: %d\n", p2.age);

    return 0;
}
