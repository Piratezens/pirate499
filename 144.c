#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    int count = countSetBits(num);
    printf("Number of bits set to 1: %d\n", count);

    return 0;
}