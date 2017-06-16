#include <stdio.h>

int main() {
    int number, dividers = 0;

    printf("Digite um número: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0)
            dividers++;
    }

    if (dividers == 2)
        printf("É primo.");
    else
        printf("Não é primo.");

    return 0;
}
