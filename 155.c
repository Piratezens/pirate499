#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    while ((n & (1 << 31)) == 0 && count < 32) {
        count++;
        n <<= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    int count = countLeadingZeros(num);
    printf("Number of leading zeros: %d\n", count);

    return 0;
}