// filepath: C:/bachelor/c/250\182.c
#include <stdio.h>
#include <ctype.h>

void capitalizeFirstChar(char *str) {
    int inWord = 0;
    while (*str) {
        if (!inWord && isalpha(*str)) {
            *str = toupper(*str);
            inWord = 1;
        } else if (isspace(*str)) {
            inWord = 0;
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    capitalizeFirstChar(str);

    printf("Capitalized string: %s\n", str);

    return 0;
}