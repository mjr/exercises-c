#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberOne);

    printf("Digite o segundo número: ");
    scanf("%d", &numberTwo);

    if (numberOne > numberTwo)
        printf("%d %d\n", numberTwo, numberOne);
    else
        printf("%d %d\n", numberOne, numberTwo);

    return 0;
}
