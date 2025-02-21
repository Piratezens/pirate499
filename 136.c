#include <stdio.h>

unsigned char swapNibbles(unsigned char n) {
    return (n << 4) | (n >> 4);
}

int main() {
    unsigned char n;

    printf("Enter a byte (0-255): ");
    scanf("%hhu", &n);

    printf("Byte after swapping nibbles: %hhu\n", swapNibbles(n));

    return 0;
}