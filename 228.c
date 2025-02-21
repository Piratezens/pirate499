// filepath: C:/bachelor/c/250\228.c
#include <stdio.h>

void printPercentage(int value, int percentage) {
    if (percentage > 100) {
        return;
    }
    printf("%d%% of %d is %.2f\n", percentage, value, value * (percentage / 100.0));
    printPercentage(value, percentage + 1);
}

int main() {
    int value;

    printf("Enter a value: ");
    scanf("%d", &value);

    printPercentage(value, 1);

    return 0;
}