// filepath: C:/bachelor/c/250\221.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], delim[10];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the delimiter: ");
    gets(delim);

    char *token = strtok(str, delim);

    printf("Splitted strings:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}