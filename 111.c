#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isValidIP(char *ip) {
    int num, dots = 0;
    char *ptr;

    if (ip == NULL) return 0;

    ptr = strtok(ip, ".");
    if (ptr == NULL) return 0;

    while (ptr) {
        if (!isdigit(*ptr)) return 0;

        num = atoi(ptr);
        if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, ".");
            if (ptr != NULL) dots++;
        } else {
            return 0;
        }
    }

    if (dots != 3) return 0;
    return 1;
}

int main() {
    char ip[20];

    printf("Enter an IP address: ");
    scanf("%s", ip);

    if (isValidIP(ip)) {
        printf("Valid IPv4 address\n");
    } else {
        printf("Invalid IPv4 address\n");
    }

    return 0;
}