// filepath: C:/bachelor/c/250\224.c
#include <stdio.h>
#include <string.h>

char *myStrstr(const char *haystack, const char *needle) {
    if (!*needle) {
        return (char *)haystack;
    }

    for (const char *p = haystack; *p; p++) {
        if (*p == *needle) {
            const char *h, *n;
            for (h = p, n = needle; *h && *n && *h == *n; h++, n++);
            if (!*n) {
                return (char *)p;
            }
        }
    }

    return NULL;
}

int main() {
    char str[200], substr[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the substring to find: ");
    gets(substr);

    char *pos = myStrstr(str, substr);

    if (pos != NULL) {
        printf("Substring found at position: %ld\n", pos - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}