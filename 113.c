#include <stdio.h>
#include <stdarg.h>

void printNumbers(int num, ...) {
    va_list valist;
    va_start(valist, num);

    for (int i = 0; i < num; i++) {
        printf("%d ", va_arg(valist, int));
    }
    printf("\n");

    va_end(valist);
}

int main() {
    printNumbers(3, 10, 20, 30);
    printNumbers(5, 1, 2, 3, 4, 5);
    return 0;
}