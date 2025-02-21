#include <stdio.h>

int isNthBitSet(unsigned int n, int pos) {
    return (n & (1 << pos)) != 0;
}

int main() {
    unsigned int num;
    int pos;
    printf("Enter an integer: ");
    scanf("%u", &num);
    printf("Enter bit position: ");
    scanf("%d", &pos);

    if (isNthBitSet(num, pos)) {
        printf("The %dth bit is set.\n", pos);
    } else {
        printf("The %dth bit is not set.\n", pos);
    }

    return 0;
}