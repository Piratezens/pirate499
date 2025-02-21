#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>

void gotoxy(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}

void clrscr() {
    system("clear");
}

int main() {
    int x = 10, y = 5, dx = 1, dy = 1;
    char ch = '*';

    while (1) {
        clrscr();
        gotoxy(x, y);
        printf("%c", ch);
        fflush(stdout);
        usleep(100000);

        x += dx;
        y += dy;

        if (x <= 0 || x >= 80) dx = -dx;
        if (y <= 0 || y >= 24) dy = -dy;
    }

    return 0;
}