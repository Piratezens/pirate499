#include <stdio.h>

int isEven(unsigned int n) {
    return !(n & 1);
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (isEven(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}