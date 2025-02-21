// filepath: C:/bachelor/c/250\87.c
#include <stdio.h>

int main() {
    int year, lastTwoDigits;

    printf("Enter a year: ");
    scanf("%d", &year);

    lastTwoDigits = year % 100;

    printf("Last two digits of the year: %d\n", lastTwoDigits);

    return 0;
}