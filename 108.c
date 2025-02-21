#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Your age is: %d\n", age);
    return 0;
}