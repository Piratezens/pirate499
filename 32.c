// filepath: C:/bachelor/c/250\32.c
#include <stdio.h>

int main() {
    float basic, da, hra, pf, netSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.4 * basic;
    hra = 0.2 * basic;
    pf = 0.12 * basic;
    netSalary = basic + da + hra - pf;

    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}