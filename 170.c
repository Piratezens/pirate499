#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}