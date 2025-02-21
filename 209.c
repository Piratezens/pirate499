// filepath: C:/bachelor/c/250\209.c
#include <stdio.h>
#include <string.h>

int isDuplicate(char *word, char words[][50], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(word, words[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void removeDuplicateWords(char *str) {
    char words[50][50];
    int count = 0;
    char *word = strtok(str, " ");
    char result[200] = "";

    while (word != NULL) {
        if (!isDuplicate(word, words, count)) {
            strcpy(words[count++], word);
            strcat(result, word);
            strcat(result, " ");
        }
        word = strtok(NULL, " ");
    }

    result[strlen(result) - 1] = '\0';
    strcpy(str, result);
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    removeDuplicateWords(str);

    printf("String after removing duplicate words: %s\n", str);

    return 0;
}