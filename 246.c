#include <stdio.h>

double factorial(int n) {
    if (n == 0) return 1;
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumSeries(double x, int n) {
    double sum = x;
    for (int i = 2; i <= n; i += 2) {
        sum += x / factorial(i);
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = sumSeries(x, n);
    printf("Sum of the series is: %lf\n", result);

    return 0;
}
