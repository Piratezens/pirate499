// filepath: C:/bachelor/c/250\83.c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n, r;
    float nCr;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("nCr = %.2f\n", nCr);

    return 0;
}