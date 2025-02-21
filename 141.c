#include <stdio.h>

int countTrailingZeroes(int n) {
    int count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Number of trailing zeroes in %d: %d\n", n, countTrailingZeroes(n));

    return 0;
#include <stdio.h>

int countTrailingZeroes(int n) {
    int count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Number of trailing zeroes in %d: %d\n", n, countTrailingZeroes(n));

    return 0;