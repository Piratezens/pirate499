// filepath: C:/bachelor/c/250\189.c
#include <stdio.h>

void removeSpaces(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (*src != ' ') {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);

    return 0;
}