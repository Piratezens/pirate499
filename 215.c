// filepath: C:/bachelor/c/250\215.c
#include <stdio.h>
#include <ctype.h>

char findFirstCapital(char *str) {
    while (*str) {
        if (isupper(*str)) {
            return *str;
        }
        str++;
    }
    return '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    char capital = findFirstCapital(str);

    if (capital) {
        printf("First capital letter: %c\n", capital);
    } else {
        printf("No capital letter found.\n");
    }

    return 0;
}