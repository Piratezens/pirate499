// filepath: C:/bachelor/c/250\58.c
#include <stdio.h>

int isPrintable(char c) {
    if (c >= 32 && c <= 126) {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isPrintable(c)) {
        printf("%c is a printable character.\n", c);
    } else {
        printf("%c is not a printable character.\n", c);
    }

    return 0;
}