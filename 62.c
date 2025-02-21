// filepath: C:/bachelor/c/250\62.c
#include <stdio.h>

int main() {
    printf("Punctuation marks:\n");
    for (char c = '!'; c <= '/'; c++) {
        printf("%c ", c);
    }
    for (char c = ':'; c <= '@'; c++) {
        printf("%c ", c);
    }
    for (char c = '['; c <= '`'; c++) {
        printf("%c ", c);
    }
    for (char c = '{'; c <= '~'; c++) {
        printf("%c ", c);
    }
    printf("\n");

    return 0;
}