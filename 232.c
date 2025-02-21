// filepath: C:/bachelor/c/250\232.c
#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Number of digits in %d is %d\n", num, countDigits(num));

    return 0;
}