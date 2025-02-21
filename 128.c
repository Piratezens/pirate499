#include <stdio.h>
#include <math.h>

double calculateCompoundInterest(double principal, double rate, int time, int n) {
    return principal * pow((1 + rate / (n * 100)), n * time);
}

int main() {
    double principal, rate, amount;
    int time, n;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%d", &time);
    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);

    amount = calculateCompoundInterest(principal, rate, time, n);
    printf("Compound Interest: %.2lf\n", amount - principal);

    return 0;
}