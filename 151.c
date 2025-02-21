

#include <stdio.h>

unsigned int nextPowerOf2(unsigned int n) {
    if (n == 0) return 1;
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    return n + 1;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    unsigned int result = nextPowerOf2(num);
    printf("The next power of 2 is: %u\n", result);

    return 0;
}