// filepath: C:/bachelor/c/250\41.c
#include <stdio.h>

int main() {
    int num = 10;
    float fnum = 5.5;
    char ch = 'A';
    char str[] = "Hello";

    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);

    return 0;
}