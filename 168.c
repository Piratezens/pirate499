#include <stdio.h>

int main() {
    for (int num = 1; num <= 20; num++) {
        printf("Multiplication table of %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}