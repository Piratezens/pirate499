// filepath: C:/bachelor/c/250\216.c
#include <stdio.h>
#include <string.h>

void countWordFrequency(char *str) {
    char words[50][50];
    int count[50] = {0};
    int n = 0;

    char *word = strtok(str, " ");
    while (word != NULL) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(word, words[i]) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[n], word);
            count[n]++;
            n++;
        }
        word = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        printf("Frequency of '%s': %d\n", words[i], count[i]);
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    countWordFrequency(str);

    return 0;
}