#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the parallelogram: ");
    scanf("%f", &base);

    printf("Enter the height of the parallelogram: ");
    scanf("%f", &height);

    area = base * height;

    printf("Area of the parallelogram: %.2f\n", area);

    return 0;
}