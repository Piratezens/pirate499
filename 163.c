#include <stdio.h>

int main() {
    char ch = 'A';

    printf("Uppercase alphabets:\n");
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    return 0;
}