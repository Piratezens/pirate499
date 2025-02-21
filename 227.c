// filepath: C:/bachelor/c/250\227.c
#include <stdio.h>
#include <string.h>

void sortWords(char words[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    char str[200], words[50][50];
    int n = 0;

    printf("Enter a string: ");
    gets(str);

    char *word = strtok(str, " ");
    while (word != NULL) {
        strcpy(words[n++], word);
        word = strtok(NULL, " ");
    }

    sortWords(words, n);

    printf("Sorted words:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}