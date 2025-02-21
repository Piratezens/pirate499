#include <stdio.h>

int sumSeries(int n) {
    if (n == 0) {
        return 0;
    }
    return n * (n + 1) / 2 + sumSeries(n - 1);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = sumSeries(n);
    printf("Sum of the series is: %d\n", result);

    return 0;
}