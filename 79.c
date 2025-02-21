// filepath: C:/bachelor/c/250\79.c
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    float radius, height, slantHeight, surfaceArea, volume;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    slantHeight = sqrt(radius * radius + height * height);
    surfaceArea = PI * radius * (radius + slantHeight);
    volume = (1.0 / 3) * PI * radius * radius * height;

    printf("Surface area of the cone: %.2f\n", surfaceArea);
    printf("Volume of the cone: %.2f\n", volume);

    return 0;
}