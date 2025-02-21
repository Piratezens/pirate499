// filepath: C:/bachelor/c/250\66.c
#include <stdio.h>

int main() {
    int days, weeks, years;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days % 365 % 7;

    printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, days);

    return 0;
}