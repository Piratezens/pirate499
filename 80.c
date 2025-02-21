// filepath: C:/bachelor/c/250\80.c
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, surfaceArea, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surfaceArea = 4 * PI * radius * radius;
    volume = (4.0 / 3) * PI * radius * radius * radius;

    printf("Surface area of the sphere: %.2f\n", surfaceArea);
    printf("Volume of the sphere: %.2f\n", volume);

    return 0;
}