// filepath: C:/bachelor/c/250\78.c
#include <stdio.h>
#include <math.h>

int main() {
    float length, width, height, surfaceArea, volume, spaceDiagonal;

    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%f", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    surfaceArea = 2 * (length * width + width * height + height * length);
    volume = length * width * height;
    spaceDiagonal = sqrt(length * length + width * width + height * height);

    printf("Surface area of the cuboid: %.2f\n", surfaceArea);
    printf("Volume of the cuboid: %.2f\n", volume);
    printf("Space diagonal of the cuboid: %.2f\n", spaceDiagonal);

    return 0;
}