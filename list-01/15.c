#include <stdio.h>

int main() {
    int divider, dividend, aux;
    float quotient;

    printf("Digite o divisor: ");
    scanf("%d", &divider);

    printf("Digite o dividendo: ");
    scanf("%d", &dividend);

    quotient = (float) divider / dividend;
    aux = quotient;

    if (quotient == aux)
        printf("É inteiro.");
    else
        printf("Não é inteiro.");

    return 0;
}
