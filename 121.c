#include <stdio.h>
#include <string.h>

void substring(char *source, int from, int n, char *target) {
    int length = strlen(source);

    if (from < 0 || from > length || n < 0) {
        printf("Invalid parameters\n");
        return;
    }

    strncpy(target, source + from, n);
    target[n] = '\0';
}

int main() {
    char source[100], target[100];
    int from, n;

    printf("Enter the source string: ");
    gets(source);
    printf("Enter the starting index and length of substring: ");
    scanf("%d %d", &from, &n);

    substring(source, from, n, target);
    printf("Substring: %s\n", target);

    return 0;
}