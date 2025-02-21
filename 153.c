#include <stdio.h>

unsigned int roundDownToPowerOf2(unsigned int n) {
    if (n == 0) return 0;
    while (n & (n - 1)) {
        n &= (n - 1);
    }
    return n;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    unsigned int result = roundDownToPowerOf2(num);
    printf("The next lower multiple of 2 is: %u\n", result);

    return 0;
}