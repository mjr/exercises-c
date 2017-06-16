#include <stdio.h>
#include <math.h>

int main() {
    int number, aux;
    float squareRoot;

    printf("Digite um número: ");
    scanf("%d", &number);

    squareRoot = sqrt(number);
    aux = squareRoot;
    if (squareRoot == aux)
        printf("É inteiro.");
    else
        printf("Não é inteiro.");

    return 0;
}
