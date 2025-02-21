#include <stdio.h>
#include <math.h>

double sumSeries(double x, int n) {
    double sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += 1 / pow(x, i);
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
