// filepath: C:/bachelor/c/250\223.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], substr[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the substring to find: ");
    gets(substr);

    char *pos = strstr(str, substr);

    if (pos != NULL) {
        printf("Substring found at position: %ld\n", pos - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}