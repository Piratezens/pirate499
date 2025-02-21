// filepath: C:/bachelor/c/250\207.c
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *word_start = str;
    char *temp = str;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverseWord(word_start, temp - 1);
        } else if (*temp == ' ') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    reverseWords(str);

    printf("String with reversed words: %s\n", str);

    return 0;
}