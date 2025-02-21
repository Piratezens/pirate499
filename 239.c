// filepath: C:/bachelor/c/250\239.c
#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));

    return 0;
}