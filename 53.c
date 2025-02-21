// filepath: C:/bachelor/c/250\53.c
#include <stdio.h>

int isDigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isDigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }

    return 0;
}