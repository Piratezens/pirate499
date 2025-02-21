// filepath: C:/bachelor/c/250\49.c
#include <stdio.h>

int myAtoi(char *str) {
    int res = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}

int main() {
    char str[20];

    printf("Enter a string of digits: ");
    scanf("%s", str);

    int num = myAtoi(str);

    printf("Converted integer: %d\n", num);

    return 0;
}