// filepath: C:/bachelor/c/250\222.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], delim[10], *saveptr;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the delimiter: ");
    gets(delim);

    char *token = strtok_r(str, delim, &saveptr);

    printf("Splitted strings:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok_r(NULL, delim, &saveptr);
    }

    return 0;
}