// filepath: C:/bachelor/c/250\55.c
#include <stdio.h>

int isUppercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isUppercase(c)) {
        printf("%c is an uppercase character.\n", c);
    } else {
        printf("%c is not an uppercase character.\n", c);
    }

    return 0;
}