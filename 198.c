// filepath: C:/bachelor/c/250\198.c
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "This is the initial string";

    memset(str, '*', 10);

    printf("Modified string: %s\n", str);

    return 0;
}