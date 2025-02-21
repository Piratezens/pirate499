// filepath: C:/bachelor/c/250\220.c
#include <stdio.h>
#include <string.h>

void findWordsEndingWith(char *str, char ch) {
    char *word = strtok(str, " ");

    printf("Words ending with '%c':\n", ch);
    while (word != NULL) {
        if (word[strlen(word) - 1] == ch) {
            printf("%s\n", word);
        }
        word = strtok(NULL, " ");
    }
}

int main() {
    char str[200], ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character: ");
    scanf("%c", &ch);

    findWordsEndingWith(str, ch);

    return 0;
}