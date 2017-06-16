#include <stdio.h>

int main() {
    int number, ten;

    printf("Digite um número: ");
    scanf("%d", &number);

    ten = (number % 100) / 10;

    if (ten % 2 == 0)
        printf("É par.");
    else
        printf("É ímpar.");

    return 0;
}
