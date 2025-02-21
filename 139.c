#include <stdio.h>

int setBits(int n) {
    return ~0;
}

int clearBits(int n) {
    return 0;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Number after setting all bits: %d\n", setBits(n));
    printf("Number after clearing all bits: %d\n", clearBits(n));

    return 0;
}