// filepath: C:/bachelor/c/250\225.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], accept[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the characters to search for: ");
    gets(accept);

    char *pos = strpbrk(str, accept);

    if (pos != NULL) {
        printf("First matching character found at position: %ld\n", pos - str);
    } else {
        printf("No matching character found.\n");
    }

    return 0;
}