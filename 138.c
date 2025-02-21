#include <stdio.h>

int main() {
    int n, shift;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter number of positions to right shift: ");
    scanf("%d", &shift);

    printf("Result after right shift: %d\n", n >> shift);

    return 0;
}