#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name1[50], name2[50];
    int lovePercentage;

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    srand(time(0));
    lovePercentage = rand() % 101;

    printf("Love percentage between %s and %s is: %d%%\n", name1, name2, lovePercentage);
    return 0;
}