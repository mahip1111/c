// write a code in which you take the input of days from the user and print it in the form of  years, months and days.
// (here we are assming the constant number of days in the month and year you can make it more complicated if you add the condition in the number of days in the years and the months.)

#include <stdio.h>

int main() {
    int days, years, months, remainingDays;

    printf("Enter total number of days: ");
    scanf("%d", &days);

    years = days / 365;            // 1 year = 365 days
    days = days % 365;

    months = days / 30;            // 1 month = 30 days
    remainingDays = days % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remainingDays);

    return 0;
}
