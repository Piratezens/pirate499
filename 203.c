// filepath: C:/bachelor/c/250\203.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void findBiggestAndSmallestPalindrome(char *str) {
    char *word = strtok(str, " ");
    char *smallest = NULL, *biggest = NULL;

    while (word != NULL) {
        int len = strlen(word);
        if (isPalindrome(word, 0, len - 1)) {
            if (smallest == NULL || len < strlen(smallest)) {
                smallest = word;
            }
            if (biggest == NULL || len > strlen(biggest)) {
                biggest = word;
            }
        }
        word = strtok(NULL, " ");
    }

    if (smallest != NULL) {
        printf("Smallest palindrome word: %s\n", smallest);
    } else {
        printf("No palindrome word found.\n");
    }

    if (biggest != NULL) {
        printf("Biggest palindrome word: %s\n", biggest);
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    gets(str);

    findBiggestAndSmallestPalindrome(str);

    return 0;
}