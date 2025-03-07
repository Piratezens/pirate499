#include <stdio.h>

int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int main() {
    int d, m, y;
    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    printf("Day of the week: %s\n", weekdays[dayOfWeek(d, m, y)]);

    return 0;
}