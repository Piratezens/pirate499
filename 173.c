#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Odd numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}