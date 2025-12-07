//Q:- Take an integer (1–7). Print the corresponding day. If input is not in range, print "Invalid Input".

#include <stdio.h>

int main() {
    int n;
    const char *daysOfWeek[] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    printf("Enter a number (1-7): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input\n");
    } else {
        int index = (n - 1) % 7;
        printf("%d day is: %s\n", n, daysOfWeek[index]);
    }

    return 0;
}
