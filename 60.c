// filepath: C:/bachelor/c/250\60.c
#include <stdio.h>

char toLowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    char c;

    printf("Enter an uppercase character: ");
    scanf("%c", &c);

    printf("Lowercase: %c\n", toLowercase(c));

    return 0;
}