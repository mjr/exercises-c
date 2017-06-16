#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberOne);

    printf("Digite o segundo número: ");
    scanf("%d", &numberTwo);

    if (numberOne == numberTwo)
        printf("São iguais.\n");
    else
        printf("São diferentes.\n");

    return 0;
}
