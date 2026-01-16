// Write a program to input name, marks of 5 subjects of a student and display the name of the student, the total marks scored, percentage scored and compute the grade of students using if else. The grades are assigned as followed, marks Grade
// < 50 → F
// 50–59 → C
// 60–69 → B
// 70–79 → B+
// 80–89 → A
// 90–100 → O

#include <stdio.h>

int main() {
    char name[50];
    float marks[5], total = 0, percentage;
    int i;

    // Input student name
    printf("Enter student name: ");
    scanf("%s", name);

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Display name, total, and percentage
    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Determine grade using if-else
    if (percentage < 50)
        printf("Grade: F\n");
    else if (percentage >= 50 && percentage < 60)
        printf("Grade: C\n");
    else if (percentage >= 60 && percentage < 70)
        printf("Grade: B\n");
    else if (percentage >= 70 && percentage < 80)
        printf("Grade: B+\n");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade: A\n");
    else if (percentage >= 90 && percentage <= 100)
        printf("Grade: O\n");
    else
        printf("Invalid Marks Entered!\n");

    return 0;
}
