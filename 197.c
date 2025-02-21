// filepath: C:/bachelor/c/250\197.c
#include <stdio.h>

void *myMemcpy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

int main() {
    char src[50] = "This is the source string";
    char dest[50];

    myMemcpy(dest, src, strlen(src) + 1);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}