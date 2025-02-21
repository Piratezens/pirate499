#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Difference: %d\n", a - b);
}

int main() {
    void (*func_ptr)(int, int);

    func_ptr = add;
    func_ptr(10, 5);

    func_ptr = subtract;
    func_ptr(10, 5);

    return 0;
}