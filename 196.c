// filepath: C:/bachelor/c/250\196.c
#include <stdio.h>
#include <string.h>

int main() {
    char src[50] = "This is the source string";
    char dest[50];

    memcpy(dest, src, strlen(src) + 1);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
} 