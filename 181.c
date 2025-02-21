// filepath: C:/bachelor/c/250\181.c
#include <stdio.h>

int main() {
    char strings[5][100];
    int i;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        gets(strings[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}