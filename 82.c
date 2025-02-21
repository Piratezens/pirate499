// filepath: C:/bachelor/c/250\82.c
#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the First quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the Second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the Fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } else if (x != 0 && y == 0) {
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    }

    return 0;
}