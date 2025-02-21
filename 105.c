#include <stdio.h>
#include <stdlib.h>

int main() {
    char command[100];
    char ip[16];

    printf("Enter the new IP address: ");
    scanf("%s", ip);

    sprintf(command, "sudo ifconfig eth0 %s", ip);
    system(command);

    return 0;
}