// filepath: C:/bachelor/c/250\211.c
#include <stdio.h>
#include <string.h>

int countWordFrequency(char *str, const char *word) {
    int count = 0;
    char *pos = str;

    while ((pos = strstr(pos, word)) != NULL) {
        count++;
        pos += strlen(word);
    }

    return count;
}

int main() {
    char str[200], word[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word to find its frequency: ");
    gets(word);

    int frequency = countWordFrequency(str, word);

    printf("Frequency of '%s' in the string is: %d\n", word, frequency);

    return 0;
}