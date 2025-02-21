#include <stdio.h>
#include <math.h>

float calculateEMI(float principal, float rate, int time) {
    float emi;
    rate = rate / (12 * 100); // one month interest
    time = time * 12; // one month period
    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);
    return emi;
}

int main() {
    float principal, rate, emi;
    int time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%d", &time);

    emi = calculateEMI(principal, rate, time);
    printf("Monthly EMI is: %.2f\n", emi);

    return 0;
}