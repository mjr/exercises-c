#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number >= 20 && number <= 90)
        printf("O número está entre 20 e 90.\n");
    else
        printf("O número não está entre 20 e 90.\n");

    return 0;
}
