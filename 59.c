// filepath: C:/bachelor/c/250\59.c
#include <stdio.h>

char toUppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    char c;

    printf("Enter a lowercase character: ");
    scanf("%c", &c);

    printf("Uppercase: %c\n", toUppercase(c));

    return 0;
}