#include <stdio.h>

void printBitsToFlip(unsigned int a, unsigned int b) {
    unsigned int xor = a ^ b;
    printf("Bits to be flipped: ");
    for (int i = 31; i >= 0; i--) {
        if ((xor >> i) & 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    unsigned int num1, num2;
    printf("Enter first integer: ");
    scanf("%u", &num1);
    printf("Enter second integer: ");
    scanf("%u", &num2);

    printBitsToFlip(num1, num2);

    return 0;
}