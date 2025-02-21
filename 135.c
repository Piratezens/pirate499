#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Number of 1's in %d: %d\n", n, countOnes(n));

    return 0;
}