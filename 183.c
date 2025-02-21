// filepath: C:/bachelor/c/250\183.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, len, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' in the string is: %d\n", ch, count);

    return 0;
}