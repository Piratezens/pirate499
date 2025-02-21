// filepath: C:/bachelor/c/250\44.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper, count;

    printf("Enter the lower bound: ");
    scanf("%d", &lower);

    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &count);

    srand(time(0));

    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}