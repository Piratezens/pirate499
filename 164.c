#include <stdio.h>

int main() {
    char ch = 'a';

    printf("Lowercase alphabets:\n");
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    return 0;
}