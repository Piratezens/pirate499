// filepath: C:/bachelor/c/250\241.c
#include <stdio.h>

int sumSeries(int n) {
    if (n == 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return -n + sumSeries(n - 1);
    }
    return n + sumSeries(n - 1);
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Sum of the series is %d\n", sumSeries(n));

    return 0;
}