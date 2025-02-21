// filepath: C:/bachelor/c/250\72.c
#include <stdio.h>

int main() {
    float a, b, height, area;

    printf("Enter the lengths of the parallel sides: ");
    scanf("%f %f", &a, &b);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = 0.5 * (a + b) * height;

    printf("Area of the trapezium: %.2f\n", area);

    return 0;
}