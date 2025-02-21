// filepath: C:/bachelor/c/250\5.c
#include <stdio.h>


int cube1(int num) {
    return num * num * num;
}


#include <math.h>
int cube2(int num) {
    return pow(num, 3);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Cube using method 1: %d\n", cube1(num));
    printf("Cube using method 2: %d\n", cube2(num));

    return 0;
}