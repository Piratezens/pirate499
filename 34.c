// filepath: C:/bachelor/c/250\34.c
#include <stdio.h>

int main() {
    char name[50], maritalStatus;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &maritalStatus);

    if (maritalStatus == 'M' || maritalStatus == 'm') {
        printf("Mrs. %s\n", name);
    } else if (maritalStatus == 'U' || maritalStatus == 'u') {
        printf("Miss %s\n", name);
    } else {
        printf("Invalid marital status\n");
    }

    return 0;
}