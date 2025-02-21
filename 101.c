#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    long size;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fclose(file);

    printf("Size of the file: %ld bytes\n", size);
    return 0;
}