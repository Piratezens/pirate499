// filepath: C:/bachelor/c/250\214.c
#include <stdio.h>
#include <ctype.h>

char findFirstCapital(char *str) {
    if (*str == '\0') {
        return '\0';
    }
    if (isupper(*str)) {
        return *str;
    }
    return findFirstCapital(str + 1);
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