// filepath: C:/bachelor/c/250\26.c
#include <stdio.h>

int main() {
    float feet, inches;

    printf("Enter length in feet: ");
    scanf("%f", &feet);

    inches = feet * 12;

    printf("Length in inches: %.2f\n", inches);

    return 0;
}