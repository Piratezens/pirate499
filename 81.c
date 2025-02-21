// filepath: C:/bachelor/c/250\81.c
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float numbers[100], sum = 0.0, mean, variance = 0.0, stdDeviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; ++i) {
        variance += pow(numbers[i] - mean, 2);
    }

    variance /= n;
    stdDeviation = sqrt(variance);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0;
}