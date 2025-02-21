#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

void gotoxy(int x, int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}

void clrscr() {
    system("clear");
}

int getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int getche() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {
    clrscr();
    gotoxy(10, 5);
    printf("Hello, World!\n");
    printf("Press any key to continue...");
    getch();
    return 0;
}