/* Q:-Calculate the area of a circle and modify the same program to calculate the 
 volume of a cylinder given its radius and height. */

 #include <stdio.h>
 int main(){
    int radius, height;
    printf("Enter the value of radius :- ");
    scanf("%d", &radius);
    printf("The area of circle is:- %f\n", 3.14*radius*radius);
    printf("Enter the value of height:- ");
    scanf("%d", &height);
    printf("The volume of cylinder is:- %f", 3.14*radius*radius*height);
    return 0;
 }