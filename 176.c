#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Leap years from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (isLeapYear(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}