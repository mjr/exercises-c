#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Par");
    } else {
        printf("Ímpar");
    }

    return 0;
}
