#include <stdio.h>

#define PRINT_VAR_NAME(var) printf(#var " = %d\n", var)

int main() {
    int x = 10;
    PRINT_VAR_NAME(x);
    return 0;
}