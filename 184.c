// filepath: C:/bachelor/c/250\184.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, wordLen = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    printf("Length of each word: ");
    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            wordLen++;
        } else {
            if (wordLen > 0) {
                printf("%d ", wordLen);
                wordLen = 0;
            }
        }
    }
    if (wordLen > 0) {
        printf("%d", wordLen);
    }
    printf("\n");

    return 0;
}