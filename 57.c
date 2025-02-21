// filepath: C:/bachelor/c/250\57.c
#include <stdio.h>

int isPunctuation(char c) {
    if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~')) {
        return 1;
    }
    return 0;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isPunctuation(c)) {
        printf("%c is a punctuation mark.\n", c);
    } else {
        printf("%c is not a punctuation mark.\n", c);
    }

    return 0;
}