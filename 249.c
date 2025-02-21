#include <stdio.h>

long long sumSeries(int n) {
    long long sum = 0;
    long long term = 0;
    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        sum += term;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    long long result = sumSeries(n);
    printf("Sum of the series is: %lld\n", result);

    return 0;
}
