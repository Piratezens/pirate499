#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    return 0;
}