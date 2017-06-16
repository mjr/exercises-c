#include <stdio.h>

int main() {
    int number, aux, first = 0, second = 1;

    printf("Digite um número: ");
    scanf("%d", &number);

    printf("%d ", first);
    printf("%d ", second);
    for (int i = 0; i < number - 2; i++) {
        aux = first + second;
        first = second;
        second = aux;

        printf("%d ", aux);
    }

    return 0;
}
