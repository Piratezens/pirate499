#include <stdio.h>
#include <string.h>

void removeConsecutiveDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2) return;

    int j = 0;
    for (int i = 1; i < len; i++) {
        if (str[i] != str[j]) {
            j++;
            str[j] = str[i];
        }
    }
    str[j + 1] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeConsecutiveDuplicates(str);

    printf("String after removing consecutive duplicates: %s\n", str);
   #include <stdio.h>
#include <string.h>

void removeConsecutiveDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2) return;

    int j = 0;
    for (int i = 1; i < len; i++) {
        if (str[i] != str[j]) {
            j++;
            str[j] = str[i];
        }
    }
    str[j + 1] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    removeConsecutiveDuplicates(str);

    printf("String after removing consecutive duplicates: %s\n", str);
   