#include <stdio.h>
#include <math.h>

double sumSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = pow(i, 3);
        if (i % 2 == 0) {
            term = -term;
        }
        sum += term;
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
