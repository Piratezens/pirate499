#include <stdio.h>
#include <unistd.h>

void displayTime(int hours, int minutes, int seconds) {
    printf("\r%02d:%02d:%02d", hours, minutes, seconds);
    fflush(stdout);
}

int main() {
    int hours = 0, minutes = 0, seconds = 0;

    while (1) {
        displayTime(hours, minutes, seconds);
        sleep(1);
        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60) {
            minutes = 0;
            hours++;
        }
        if (hours == 24) {
            hours = 0;
        }
    }

    return 0;
}