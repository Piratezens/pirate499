#include <stdio.h>

int hasAlternateBitPattern(unsigned int n) {
    unsigned int pattern = n ^ (n >> 1);
    return (pattern & (pattern + 1)) == 0;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (hasAlternateBitPattern(num)) {
        printf("The number contains an alternate bit pattern.\n");
    } else {
        printf("The number does not contain an alternate bit pattern.\n");
    }

    return 0;
}