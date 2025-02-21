#include <stdio.h>
#include <string.h>

void stringToHex(char *str) {
    while (*str) {
        printf("%02X ", *str++);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Hexadecimal representation: ");
    stringToHex(str);

    return 0;
}