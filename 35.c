// filepath: C:/bachelor/c/250\35.c
#include <stdio.h>

int main() {
    int num, a, b;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter two divisors: ");
    scanf("%d %d", &a, &b);

    if (num % a == 0 && num % b == 0) {
        printf("%d is divisible by both %d and %d\n", num, a, b);
    } else {
        printf("%d is not divisible by both %d and %d\n", num, a, b);
    }

    return 0;
}