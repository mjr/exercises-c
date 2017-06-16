#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number % 10 == 0) {
        printf("É divisível por 10\n");
    }
    if (number % 5 ==0) {
        printf("É divisível por 5\n");
    }
    if (number % 2 ==0) {
        printf("É divisível por 2");
    }
    if (number % 10 != 0 && number % 5 != 0 && number % 2 != 0) {
        printf("Não é divisível por 10, nem por 5 e nem por 2");
    }

    return 0;
}
