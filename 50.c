// filepath: C:/bachelor/c/250\50.c
#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Character\tASCII Value\n");

    for (int i = 0; i < 128; i++) {
        printf("%c\t\t%d\n", i, i);
    }

    return 0;
}