#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    int currentTime;

    time(&t);
    currentTime = (int)t;

    printf("Current time in integer format: %d\n", currentTime);
    return 0;
}