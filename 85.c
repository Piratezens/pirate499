// filepath: C:/bachelor/c/250\85.c
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    long long binary1, binary2;
    int decimal1, decimal2, product;

    printf("Enter two binary numbers: ");
    scanf("%lld %lld", &binary1, &binary2);

    decimal1 = binaryToDecimal(binary1);
    decimal2 = binaryToDecimal(binary2);
    product = decimal1 * decimal2;

    printf("Product of the binary numbers: %lld\n", decimalToBinary(product));

    return 0;
}