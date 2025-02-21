#include <stdio.h>

unsigned int swapBits(unsigned int n, int pos1, int pos2) {
    unsigned int bit1 = (n >> pos1) & 1;
    unsigned int bit2 = (n >> pos2) & 1;

    if (bit1 != bit2) {
        n ^= (1 << pos1);
        n ^= (1 << pos2);
    }

    return n;
}

int main() {
    unsigned int num;
    int pos1, pos2;
    printf("Enter an integer: ");
    scanf("%u", &num);
    printf("Enter first bit position: ");
    scanf("%d", &pos1);
    printf("Enter second bit position: ");
    scanf("%d", &pos2);

    unsigned int result = swapBits(num, pos1, pos2);
    printf("Result after swapping bits: %u\n", result);

    return 0;
}