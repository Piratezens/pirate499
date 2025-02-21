// filepath: C:/bachelor/c/250\185.c
#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (!isVowel(*src)) {
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

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}