// Given the coordinates (a, b) of a center of a circle and its radius, write a program which will determine whether a user entered point lies inside the circle, on the circle or outside the circle. 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, r;        // center (a,b) and radius
    float x, y;           // point (x,y)
    float distance;

    // Input center and radius
    printf("Enter the center of the circle (a b): ");
    scanf("%f %f", &a, &b);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Input point
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    // Calculate distance from center to point
    distance = sqrt((x - a)*(x - a) + (y - b)*(y - b));

    // Check position of the point
    if (distance < r)
        printf("The point lies inside the circle.\n");
    else if (fabs(distance - r) < 0.0001) // for floating point comparison
        printf("The point lies on the circle.\n");
    else
        printf("The point lies outside the circle.\n");

    return 0;
}
