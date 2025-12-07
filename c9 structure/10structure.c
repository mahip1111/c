// nesting of structures

#include <stdio.h>
#include <string.h>

struct Address {
    char city[20];
    int pincode;
};

struct Student {
    char name[20];
    int roll;
    struct Address a1;  // Nested structure
};

int main() {
    struct Student s1;

    strcpy(s1.name, "Rahul");
    s1.roll = 101;
    strcpy(s1.a1.city, "Delhi");
    s1.a1.pincode = 110001;

    printf("Student Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("City: %s\n", s1.a1.city);
    printf("Pincode: %d\n", s1.a1.pincode);

    return 0;
}
