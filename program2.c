#include <stdio.h>
#include <stdlib.h>

// C program to calculate area using array for length and breadth

int main()
{
    float arr[2];
    float length, breadth, area;

    printf("Enter the length of the rectangle: \n");
    scanf("%f", &arr[0]);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &arr[1]);

    length = arr[0];
    breadth = arr[1];

    area = length * breadth;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}