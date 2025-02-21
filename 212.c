// filepath: C:/bachelor/c/250\212.c
#include <stdio.h>
#include <ctype.h>

int sumOfDigits(char *str) {
    int sum = 0;
    while (*str) {
        if (isdigit(*str)) {
            sum += *str - '0';
        }
        str++;
    }
    return sum;
}

int main() {
    char str[100];

    printf("Enter an alphanumeric string: ");
    gets(str);

    int sum = sumOfDigits(str);

    printf("Sum of all digits in the string is: %d\n", sum);

    return 0;
}