// filepath: C:/bachelor/c/250\235.c
#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed number is %d\n", reverseNumber(num, 0));

    return 0;
}