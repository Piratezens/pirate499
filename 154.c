#include <stdio.h>
#include <limits.h>

void printRange(const char *type, unsigned int min, unsigned int max) {
    printf("Range of %s: %u to %u\n", type, min, max);
}

int main() {
    printRange("unsigned char", 0, UCHAR_MAX);
    printRange("unsigned short", 0, USHRT_MAX);
    printRange("unsigned int", 0, UINT_MAX);
    printRange("unsigned long", 0, ULONG_MAX);

    return 0;
}