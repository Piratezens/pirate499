#include <stdio.h>

void findClass(char ip[]) {
    int firstOctet;
    sscanf(ip, "%d", &firstOctet);

    if (firstOctet >= 1 && firstOctet <= 126) {
        printf("Class A\n");
    } else if (firstOctet >= 128 && firstOctet <= 191) {
        printf("Class B\n");
    } else if (firstOctet >= 192 && firstOctet <= 223) {
        printf("Class C\n");
    } else if (firstOctet >= 224 && firstOctet <= 239) {
        printf("Class D\n");
    } else if (firstOctet >= 240 && firstOctet <= 255) {
        printf("Class E\n");
    } else {
        printf("Invalid IP Address\n");
    }
}

int main() {
    char ip[16];

    printf("Enter an IP address: ");
    scanf("%s", ip);

    findClass(ip);
    return 0;
}