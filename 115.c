#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;
    int currentDate;

    time(&t);
    tm_info = localtime(&t);

    currentDate = (tm_info->tm_year + 1900) * 10000 + (tm_info->tm_mon + 1) * 100 + tm_info->tm_mday;

    printf("Current date in integer format: %d\n", currentDate);
    return 0;
}