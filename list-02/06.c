#include <stdio.h>

int main() {
    int number, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &number);

    for (int i = number; i > 0; i--)
        fatorial = fatorial * i;

    printf("%d\n", fatorial);

    return 0;
}
