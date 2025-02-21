#include <stdio.h>

int main() {
    char ch;

    printf("Uppercase alphabets:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    printf("Lowercase alphabets:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}