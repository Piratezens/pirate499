// filepath: C:/bachelor/c/250\84.c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n, r;
    float nPr;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    nPr = factorial(n) / factorial(n - r);

    printf("nPr = %.2f\n", nPr);

    return 0;
}