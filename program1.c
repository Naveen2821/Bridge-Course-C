#include<stdio.h>
#include<stdlib.h> // C program to calculate area of rectangle
int main()
{
    float lenght,breadth,area;
    printf("Enter the length of the rectangle: \n");
    scanf("%f", &lenght);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth);
    area = lenght * breadth;
    printf("The area of the rectangle is: %.2f", area);
    return 0;

}