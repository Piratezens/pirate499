// filepath: C:/bachelor/c/250\30.c
#include <stdio.h>

int main() {
    float basic, employeePF, employerPF;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    employeePF = basic * 0.12;
    employerPF = basic * 0.12;

    printf("Employee PF: %.2f\n", employeePF);
    printf("Employer PF: %.2f\n", employerPF);

    return 0;
}