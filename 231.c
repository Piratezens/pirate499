// filepath: C:/bachelor/c/250\231.c
#include <stdio.h>

double power(double base, int exp) {
    if (exp == 0) {
        return 1;
    }
    if (exp < 0) {
        return 1 / power(base, -exp);
    }
    return base * power(base, exp - 1);
}

int main() {
    double base;
    int exp;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%.2lf^%d = %.2lf\n", base, exp, power(base, exp));

    return 0;
}