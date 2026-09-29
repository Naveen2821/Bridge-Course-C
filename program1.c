#include <stdio.h>
#include <stdlib.h>

// C program to calculate perimeter and area of rectangle

int main()
{
    float length, breadth, area;

    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The perimeter of the rectangle is: %.2f\n", 2 * (length + breadth));
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}