#include <stdio.h>

double factorial(int n) {
    if (n == 0) return 1;
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * i) / factorial(i);
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = sumSeries(n);
    printf("Sum of the series is: %lf\n", result);

    return 0;
}
