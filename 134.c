#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;
    int i;
    for (i = 0; i < 32; i++) {
        if ((n & (1 << i))) {
            rev |= 1 << ((32 - 1) - i);
        }
    }
    return rev;
}

int main() {
    unsigned int n;

    printf("Enter an integer: ");
    scanf("%u", &n);

    printf("Number after reversing bits: %u\n", reverseBits(n));

    return 0;
}