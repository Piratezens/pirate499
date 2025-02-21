// filepath: C:/bachelor/c/250\31.c
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50];

    memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[49] = '\0';

    printf("Buffer: %s\n", buffer);

    return 0;
}