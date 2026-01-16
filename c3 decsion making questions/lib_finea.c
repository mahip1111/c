// Q: Write a C program to calculate the library fine for returning a book late based on the number of days it is overdue.
// The fine is charged according to the following rules:
// If the book is 1 to 7 days late, the fine is ₹2 per day.
// If the book is 8 to 14 days late, the fine is ₹3 per day.
// If the book is 15 to 30 days late, the fine is ₹5 per day.
// If the book is more than 30 days late, the membership is cancelled (no fine is calculated).

#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days >= 1 && days <= 7)
        fine = 2 * days;
    else if (days <= 14)   // already know days > 7
        fine = 3 * days;
    else if (days <= 30)   // already know days > 14
        fine = 5 * days;
    else if (days > 30) {
        printf("Membership cancelled.\n");
        return 0;   // exit early, no fine printed
    }
    else {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Your fine is: ₹%d\n", fine);
    return 0;
}

// NOTE:- Here if you put input as 31 then fine will not be printed bcz of the use of the early return 0 inside the else if.