#include <stdio.h>

int main() {
    int numberOne, numberTwo;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberOne);

    printf("Digite o segundo número: ");
    scanf("%d", &numberTwo);

    if (numberOne % numberTwo == 0)
        printf("O primeiro número é divisível pelo segundo.\n");
    else
        printf("O primeiro número náo é divisível pelo segundo.\n");

    return 0;
}
