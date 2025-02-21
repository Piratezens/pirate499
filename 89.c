// filepath: C:/bachelor/c/250\89.c
#include <stdio.h>

int main() {
    float height;

    printf("Enter the height of the person (in cm): ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("The person is a dwarf.\n");
    } else if (height >= 150.0 && height <= 180.0) {
        printf("The person is of average height.\n");
    } else {
        printf("The person is tall.\n");
    }

    return 0;
}