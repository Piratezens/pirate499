// filepath: C:/bachelor/c/250\14.c
#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    int n;

    printf("Enter base number: ");
    scanf("%lf", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    result = pow(x, n);

    printf("%.2lf^%d = %.2lf\n", x, n, result);

    return 0;
}