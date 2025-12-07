// Passing structure through a function:-

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {102, "Ravi", 91.0};

    // Passing entire structure
    display(s1);

    return 0;
}
