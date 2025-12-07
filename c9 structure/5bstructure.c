// Beautiful use or array in structures.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3] = {
        {101, "Rahul", 89.5},
        {102, "Priya", 92.0},
        {103, "Aman", 76.5},
    };

    struct Student rekha = {0};  //All elements set to 0  
    printf("%d\n",rekha.roll);
    printf("%s\n",rekha.name);   // This will print nothing a simple balnk space.
    printf("%d\n",rekha.marks);


    for(int i=0; i<3; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

// Structure are also stored in contiguous blocks of memory.
