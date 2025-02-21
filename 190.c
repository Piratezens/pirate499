// filepath: C:/bachelor/c/250\190.c
#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char *str) {
    int inWord = 0;
    while (*str) {
        if (!inWord && isalpha(*str)) {
            *str = toupper(*str);
            inWord = 1;
        } else {
            *str = tolower(*str);
        }
        if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    toSentenceCase(str);

    printf("String in sentence case: %s\n", str);

    return 0;
}