#include <stdio.h>

void printBitsBetweenPositions(unsigned char byte, int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char byte;
    int start, end;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);
    printf("Enter start position: ");
    scanf("%d", &start);
    printf("Enter end position: ");
    scanf("%d", &end);

    printf("Bits between positions %d and %d: ", start, end);
    printBitsBetweenPositions(byte, start, end);

    return 0;
}