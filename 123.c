#include <stdio.h>

int hexToInt(char hex[]) {
    int result = 0;
    sscanf(hex, "%x", &result);
    return result;
}

int main() {
    char hex[10];
    int integer;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    integer = hexToInt(hex);
    printf("Integer value: %d\n", integer);

    return 0;
}