// filepath: C:/bachelor/c/250\191.c
#include <stdio.h>
#include <ctype.h>

void removeAlphabets(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (!isalpha(*src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];

    printf("Enter an alphanumeric string: ");
    gets(str);

    removeAlphabets(str);

    printf("String after removing alphabets: %s\n", str);

    return 0;
}