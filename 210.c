// filepath: C:/bachelor/c/250\210.c
#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char arr[10][50];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // to consume the newline character

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        gets(arr[i]);
    }

    sortStrings(arr, n);

    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}