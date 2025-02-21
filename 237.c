// filepath: C:/bachelor/c/250\237.c
#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b > 0) {
        return a + multiply(a, b - 1);
    }
    if (b < 0) {
        return -multiply(a, -b);
    }
    return 0;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Product of %d and %d is %d\n", a, b, multiply(a, b));

    return 0;
}