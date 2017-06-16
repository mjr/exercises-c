#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number > 20)
        printf("É maior do que 20.");
    else if (number == 20)
        printf("É igual a 20.");
    else if (number < 20)
        printf("É menor do que 20.");

    return 0;
}
