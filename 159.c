#include <stdio.h>

int countBitsToFlip(unsigned int a, unsigned int b) {
    unsigned int xor = a ^ b;
    int count = 0;
    while (xor) {
        count += xor & 1;
        xor >>= 1;
    }
    return count;
}

int main() {
    unsigned int num1, num2;
    printf("Enter first integer: ");
    scanf("%u", &num1);
    printf("Enter second integer: ");
    scanf("%u", &num2);

    int count = countBitsToFlip(num1, num2);
    printf("Number of bits to be flipped: %d\n", count);

    return 0;
}