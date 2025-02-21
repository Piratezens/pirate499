#include <stdio.h>

int isPowerOf2(unsigned int n) {
    return n && !(n & (n - 1));
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (isPowerOf2(num)) {
        printf("The number is a power of 2.\n");
    } else {
        printf("The number is not a power of 2.\n");
    }

    return 0;
}