// filepath: C:/bachelor/c/250\179.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, len;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its indexes: ");
    scanf("%c", &ch);

    len = strlen(str);
    printf("Indexes of '%c' in the string are: ", ch);
    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}