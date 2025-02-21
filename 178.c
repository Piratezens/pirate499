#include <stdio.h>

int main() {
    int age, baby = 0, school = 0, adult = 0;

    for (int i = 0; i < 15; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &age);

        if (age <= 5) {
            baby++;
        } else if (age <= 18) {
            school++;
        } else {
            adult++;
        }
    }

    printf("Total Baby age: %d\n", baby);
    printf("Total School age: %d\n", school);
    printf("Total Adult age: %d\n", adult);

    return 0;
}