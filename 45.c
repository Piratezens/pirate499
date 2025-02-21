// filepath: C:/bachelor/c/250\45.c
#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2, difference;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    difference = subtract(num1, num2);

    printf("Difference: %d\n", difference);

    return 0;
}