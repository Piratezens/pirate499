#include <stdio.h>

int areAllBitsSet(unsigned int n) {
    return n && !(n & (n + 1));
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (areAllBitsSet(num)) {
        printf("All bits are set.\n");
    } else {
        printf("Not all bits are set.\n");
    }

    return 0;
}