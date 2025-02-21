// filepath: C:/bachelor/c/250\63.c
#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Printable characters:\n");
    for (char c = 0; c < 127; c++) {
        if (isprint(c)) {
            printf("%c ", c);
        }
    }
    printf("\n");

    return 0;
}