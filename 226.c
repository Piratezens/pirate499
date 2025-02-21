// filepath: C:/bachelor/c/250\226.c
#include <stdio.h>
#include <string.h>

char *myStrpbrk(const char *str, const char *accept) {
    while (*str) {
        for (const char *a = accept; *a; a++) {
            if (*str == *a) {
                return (char *)str;
            }
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[200], accept[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the characters to search for: ");
    gets(accept);

    char *pos = myStrpbrk(str, accept);

    if (pos != NULL) {
        printf("First matching character found at position: %ld\n", pos - str);
    } else {
        printf("No matching character found.\n");
    }

    return 0;
}