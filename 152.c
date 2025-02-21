#include <stdio.h>

int msbPosition(unsigned int n) {
    int pos = -1;
    while (n > 0) {
        pos++;
        n >>= 1;
    }
    return pos;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    int pos = msbPosition(num);
    if (pos == -1) {
        printf("No bits are set.\n");
    } else {
        printf("The position of the MSB is: %d\n", pos);
    }

    return 0;
}