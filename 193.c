// filepath: C:/bachelor/c/250\193.c
#include <stdio.h>
#include <string.h>

void swapAdjacentChars(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    swapAdjacentChars(str);

    printf("String after swapping adjacent characters: %s\n", str);

    return 0;
}