#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    return 0;
}