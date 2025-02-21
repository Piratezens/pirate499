#include <stdio.h>

void binaryAddition(int a, int b) {
    int sum = a + b;
    printf("Binary Addition: %d + %d = %d\n", a, b, sum);
}

void binarySubtraction(int a, int b) {
    int diff = a - b;
    printf("Binary Subtraction: %d - %d = %d\n", a, b, diff);
}

int main() {
    int a, b;

    printf("Enter two binary numbers: ");
    scanf("%d %d", &a, &b);

    binaryAddition(a, b);
    binarySubtraction(a, b);

    return 0;
}