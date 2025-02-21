#include <stdio.h>

int isPalindrome(unsigned int n) {
    unsigned int reversed = 0, original = n;
    while (n > 0) {
        reversed = (reversed << 1) | (n & 1);
        n >>= 1;
    }
    return original == reversed;
}

int main() {
    unsigned int num;
    printf("Enter an integer: ");
    scanf("%u", &num);

    if (isPalindrome(num)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}