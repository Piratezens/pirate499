#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf(" ");
    gets(str);

    printf("You entered: %s\n", str);

    free(str);
    return 0;
}