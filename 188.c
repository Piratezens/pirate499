// filepath: C:/bachelor/c/250\188.c
#include <stdio.h>

void copyString(char *src, char *dest) {
    int count = 0;
    while (*src) {
        *dest++ = *src++;
        count++;
    }
    *dest = '\0';
    printf("Total copied characters: %d\n", count);
}

int main() {
    char src[100], dest[100];

    printf("Enter a string: ");
    gets(src);

    copyString(src, dest);

    printf("Copied string: %s\n", dest);

    return 0;
}