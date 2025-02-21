#include <stdio.h>

int minBitsToStore(int n) {
    int bits = 0;
    while (n > 0) {
        bits++;
        n >>= 1;
    }
    return bits;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Minimum number of bits to store %d: %d\n", n, minBitsToStore(n));

    return 0;
}