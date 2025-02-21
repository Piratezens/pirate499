#include <stdio.h>

int main() {
    unsigned int ip;
    unsigned char bytes[4];

    printf("Enter IP address in hexadecimal format (e.g., 0xC0A80001): ");
    scanf("%x", &ip);

    bytes[0] = (ip >> 24) & 0xFF;
    bytes[1] = (ip >> 16) & 0xFF;
    bytes[2] = (ip >> 8) & 0xFF;
    bytes[3] = ip & 0xFF;

    printf("IP address: %d.%d.%d.%d\n", bytes[0], bytes[1], bytes[2], bytes[3]);

    return 0;
}