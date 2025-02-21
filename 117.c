#include <stdio.h>
#include "myheader.h"

int main() {
    printf("Sum: %d\n", add(5, 3));
    printf("Difference: %d\n", subtract(5, 3));
    return 0;
}

// filepath: /C:/bachelor/c/250/myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

#endif