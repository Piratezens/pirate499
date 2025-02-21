// filepath: C:/bachelor/c/250\29.c
#include <stdio.h>

int main() {
    int count = 0, num;

    printf("Enter integers (enter a non-integer to stop): ");
    while (scanf("%d", &num) == 1) {
        count++;
    }

    printf("Number of inputs taken: %d\n", count);

    return 0;
}