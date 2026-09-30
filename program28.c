//distance between two points 
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;
Point inputPoint(void) {
    Point p;
    printf("Enter x coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);
    return p;
}
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
void output(double d) {
    printf("Distance: %.2f\n", d);
}
int main() {
    Point p1 = inputPoint();
    Point p2 = inputPoint();
    double d = distance(p1, p2);
    output(d);
    return 0;
}