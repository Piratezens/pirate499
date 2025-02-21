// filepath: C:/bachelor/c/250\48.c
#include <stdio.h>

int getRemainder(int dividend, int divisor) {
    return dividend - (divisor * (dividend / divisor));
}

int main() {
    int dividend, divisor, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    remainder = getRemainder(dividend, divisor);

    printf("Remainder: %d\n", remainder);

    return 0;
}