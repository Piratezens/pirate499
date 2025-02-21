#include <stdio.h>

unsigned short swapBytes(unsigned short n) {
    return (n >> 8) | (n << 8);
}

int main() {
    unsigned short n;

    printf("Enter a 2-byte hexadecimal number (e.g., 0x1234): ");
    scanf("%hx", &n);

    printf("Number after swapping bytes: 0x%04hx\n", swapBytes(n));

    return 0;
}