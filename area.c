#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        area = PI * radius * radius;

        printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);
    }

    return 0;
}