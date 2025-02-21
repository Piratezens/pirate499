// filepath: C:/bachelor/c/250\180.c
#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}