// filepath: C:/bachelor/c/250\200.c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}