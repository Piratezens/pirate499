// filepath: C:/bachelor/c/250\208.c
#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word) {
    char *pos, temp[200];
    int len = strlen(word);

    while ((pos = strstr(str, word)) != NULL) {
        strcpy(temp, pos + len);
        *pos = '\0';
        strcat(str, temp);
    }
}

int main() {
    char str[200], word[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word to remove: ");
    gets(word);

    removeWord(str, word);

    printf("String after removing the word: %s\n", str);

    return 0;
}