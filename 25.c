// filepath: C:/bachelor/c/250\25.c
#include <stdio.h>

int globalVar = 10;

void modifyGlobalVar() {
    globalVar = 20;
}

int main() {
    printf("Global variable before modification: %d\n", globalVar);
    modifyGlobalVar();
    printf("Global variable after modification: %d\n", globalVar);
    return 0;
}