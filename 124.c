#include <stdio.h>

void extractBytes(int num) {
    unsigned char bytes[4];
    bytes[0] = (num >> 24) & 0xFF;
    bytes[1] = (num >> 16) & 0xFF;
    bytes[2] = (num >> 8) & 0xFF;
    bytes[3] = num & 0xFF;

    printf("Bytes: %02x %02x %02x %02x\n", bytes[0], bytes[1], bytes[2], bytes[3]);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    extractBytes(num);

    return 0;
}