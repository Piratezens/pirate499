// filepath: C:/bachelor/c/250\199.c
#include <stdio.h>

void *myMemset(void *str, int c, size_t n) {
    unsigned char *p = str;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return str;
}

int main() {
    char str[50] = "This is the initial string";

    myMemset(str, '*', 10);

    printf("Modified string: %s\n", str);

    return 0;
}