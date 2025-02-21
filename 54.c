// filepath: C:/bachelor/c/250\54.c
#include <stdio.h>

int isWhitespace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isWhitespace(c)) {
        printf("%c is a whitespace character.\n", c);
    } else {
        printf("%c is not a whitespace character.\n", c);
    }

    return 0;
}