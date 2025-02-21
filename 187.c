// filepath: C:/bachelor/c/250\187.c
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // to consume the newline character after scanf

    char strings[n][100];
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        gets(strings[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Length of string %d: %lu\n", i + 1, strlen(strings[i]));
    }

    return 0;
}