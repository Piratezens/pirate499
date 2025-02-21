// filepath: C:/bachelor/c/250\204.c
#include <stdio.h>
#include <string.h>

void findSmallestWord(char *str) {
    char *word = strtok(str, " ");
    char *smallest = word;

    while (word != NULL) {
        if (strlen(word) < strlen(smallest)) {
            smallest = word;
        }
        word = strtok(NULL, " ");
    }

    printf("Smallest word: %s\n", smallest);
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    findSmallestWord(str);

    return 0;
}