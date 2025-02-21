// filepath: C:/bachelor/c/250\56.c
#include <stdio.h>

int isLowercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isLowercase(c)) {
        printf("%c is a lowercase character.\n", c);
    } else {
        printf("%c is not a lowercase character.\n", c);
    }

    return 0;
}