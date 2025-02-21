#include <stdio.h>

double sumAP(double a, double d, int n) {
    return (n / 2.0) * (2 * a + (n - 1) * d);
}

int main() {
    double a, d;
    int n;

    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the common difference (d): ");
    scanf("%lf", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = sumAP(a, d, n);
    printf("Sum of the A.P. series is: %lf\n", result);

    return 0;
}
