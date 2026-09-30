//area of rectangle using structure 
#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle r;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &r.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &r.width);
    float area = r.length * r.width;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}