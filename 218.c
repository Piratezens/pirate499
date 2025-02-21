// filepath: C:/bachelor/c/250\218.c
#include <stdio.h>
#include <string.h>

void printSubsets(char *str, int n, int len, char *subset, int index) {
    if (index == len) {
        subset[index] = '\0';
        printf("%s\n", subset);
        return;
    }

    for (int i = n; i < strlen(str); i++) {
        subset[index] = str[i];
        printSubsets(str, i + 1, len, subset, index + 1);
    }
}

int main() {
    char str[100], subset[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the length of subsets: ");
    scanf("%d", &len);

    printf("All possible subsets of length %d are:\n", len);
    printSubsets(str, 0, len, subset, 0);

    return 0;
}