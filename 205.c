// filepath: C:/bachelor/c/250\205.c
#include <stdio.h>
#include <string.h>

void findBiggestWord(char *str) {
    char *word = strtok(str, " ");
    char *biggest = word;

    while (word != NULL) {
        if (strlen(word) > strlen(biggest)) {
            biggest = word;
        }
        word = strtok(NULL, " ");
    }

    printf("Biggest word: %s\n", biggest);
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    findBiggestWord(str);

    return 0;
}