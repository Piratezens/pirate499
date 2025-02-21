#include <stdio.h>

int main() {
    int n, shift;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter number of positions to left shift: ");
    scanf("%d", &shift);

    printf("Result after left shift: %d\n", n << shift);

    return 0;
}