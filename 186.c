// filepath: C:/bachelor/c/250\186.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeFirstCharOfEachWord(char *str) {
    char *src = str, *dst = str;
    int inWord = 0;
    while (*src) {
        if (!inWord && isalpha(*src)) {
            inWord = 1;
        } else {
            *dst++ = *src;
        }
        if (isspace(*src)) {
            inWord = 0;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeFirstCharOfEachWord(str);

    printf("String after removing first character of each word: %s\n", str);

    return 0;
}