#include <stdio.h>

double sumSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / (double)(i + 2);
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
