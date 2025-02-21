#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Number\tSquare\tCube\tSquare Root\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i, i * i, i * i * i, sqrt(i));
    }

    return 0;
}