// filepath: C:/bachelor/c/250\38.c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Address of variable num: %p\n", (void*)&num);

    return 0;
}