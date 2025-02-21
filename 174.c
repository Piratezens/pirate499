#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (int)result == num;
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}