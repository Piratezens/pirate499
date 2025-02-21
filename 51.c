#include <stdio.h>


void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swap2(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


void swap3(int *a, int *b) {
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}


void swap4(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap1(&num1, &num2);
    printf("After swapping using method 1: num1 = %d, num2 = %d\n", num1, num2);

    swap2(&num1, &num2);
    printf("After swapping using method 2: num1 = %d, num2 = %d\n", num1, num2);

    swap3(&num1, &num2);
    printf("After swapping using method 3: num1 = %d, num2 = %d\n", num1, num2);

    swap4(&num1, &num2);
    printf("After swapping using method 4: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}