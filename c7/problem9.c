// Q:- Write a programe to take input of name, rollno. and marks obtained by a student in 4 subjects of 100 marks each and display the name, roll no. with percentage score?

// WAY TO ACESS THE ARRAY USING PRINTF AND SCANF FUNCTIONS.
// Q:- Write a program to accept marks of five students in an array and print them on the screen. 

// See this code again

#include <stdio.h>
#include <string.h>

struct student {
    char name[40];
    int rollno;
    int marks[4];   // 4 subjects
};

int main() {
    struct student student[4];

    for (int i = 0; i < 4; i++) {
        printf("\nEnter the details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &student[i].rollno);
        getchar(); // clear newline left in buffer      // ek bar ise chiz ko dekhna ki ye kar kya rha hai yahan par.

        printf("Name: ");
        fgets(student[i].name, 40, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0'; // remove newline

        printf("Enter marks in 4 subjects: ");
        for (int j = 0; j < 4; j++) {
            scanf("%d", &student[i].marks[j]);
        }
    }

    printf("\nStudents details are:-\n");
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += student[i].marks[j];
        }
        float percentage = (total / 400.0) * 100;

        printf("Student %d -> Name: %s | Roll No: %d | Percentage: %.2f%%\n",
               i + 1, student[i].name, student[i].rollno, percentage);
    }

    return 0;
}
