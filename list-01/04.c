#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("É divisível por 5");
    } else {
        printf("Não é divisível por 5");
    }

    return 0;
}
