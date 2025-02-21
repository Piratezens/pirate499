// filepath: C:/bachelor/c/250\64.c
#include <stdio.h>

int main() {
    printf("Printable characters:\n");
    for (char c = 32; c <= 126; c++) {
        printf("%c ", c);
    }
    printf("\n");

    return 0;
}