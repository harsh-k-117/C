#include <stdio.h>

int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter, circle_area, circle_circumference;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);

    circle_area = 3.14 * radius * radius;
    circle_circumference = 2 * 3.14 * radius;

    printf("Rectangle Area: %f\n", rect_area);
    printf("Rectangle Perimeter: %f\n", rect_perimeter);
    printf("Circle Area: %f\n", circle_area);
    printf("Circle Circumference: %f\n", circle_circumference);

    return 0;
}
