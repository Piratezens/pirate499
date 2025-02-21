// filepath: C:/bachelor/c/250\213.c
#include <stdio.h>

void copyString(char *dest, const char *src) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(dest + 1, src + 1);
}

int main() {
    char src[100], dest[100];

    printf("Enter a string: ");
    gets(src);

    copyString(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}