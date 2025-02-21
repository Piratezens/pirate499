#include <stdio.h>

int swapBits(int n, int p1, int p2) {
    int bit1 = (n >> p1) & 1;
    int bit2 = (n >> p2) & 1;

    if (bit1 != bit2) {
        n ^= (1 << p1) | (1 << p2);
    }

    return n;
}

int main() {
    int n, p1, p2;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter two bit positions to swap: ");
    scanf("%d %d", &p1, &p2);

    printf("Number after swapping bits: %d\n", swapBits(n, p1, p2));

    return 0;
}