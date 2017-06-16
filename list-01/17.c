#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberOne);

    printf("Digite o segundo número: ");
    scanf("%d", &numberTwo);

    if (numberOne > numberTwo)
        printf("%d\n", numberOne);
    else
        printf("%d\n", numberTwo);

    return 0;
}
