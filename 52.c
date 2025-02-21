// filepath: C:/bachelor/c/250\52.c
#include <stdio.h>

int isAlphanumeric(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isAlphanumeric(c)) {
        printf("%c is alphanumeric.\n", c);
    } else {
        printf("%c is not alphanumeric.\n", c);
    }

    return 0;
}