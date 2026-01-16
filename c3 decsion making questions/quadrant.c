// Given a point (x, y), write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the x-axis, y-axis or at the origin, viz. (0, 0). 

#include <stdio.h>

int main() {
    float x, y;
    
    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies at the Origin.\n");
    } 
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } 
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } 
    else if (x > 0 && y > 0) {
        printf("The point lies in the 1st Quadrant.\n");
    } 
    else if (x < 0 && y > 0) {
        printf("The point lies in the 2nd Quadrant.\n");
    } 
    else if (x < 0 && y < 0) {
        printf("The point lies in the 3rd Quadrant.\n");
    } 
    else if (x > 0 && y < 0) {
        printf("The point lies in the 4th Quadrant.\n");
    }

    return 0;
}
