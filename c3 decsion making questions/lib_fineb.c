#include <stdio.h>

int main() {
    int days, fine;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 0)
        printf("Invalid input.\n");
    else if (days > 30)
        printf("Membership cancelled.\n");
    else {
        fine = (days <= 7) ? 2 * days :(days <= 14) ? 3 * days : 5* days;
        printf("Your fine is: ₹%d\n", fine);
    }

    return 0;
}