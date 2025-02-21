#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name;
    int length;

    printf("Enter the length of your name: ");
    scanf("%d", &length);

    name = (char *)malloc((length + 1) * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is: %s\n", name);
    free(name);
    return 0;
}