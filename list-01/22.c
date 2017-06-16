#include <stdio.h>

int main() {
    int numberOne, numberTwo, numberThree;

    printf("Digite o primeiro número: ");
    scanf("%d", &numberOne);

    printf("Digite o segundo número: ");
    scanf("%d", &numberTwo);

    printf("Digite o terceiro número: ");
    scanf("%d", &numberThree);

    if (numberOne > numberTwo && numberOne > numberThree)
        numberThree = numberOne;
    else if (numberTwo > numberOne && numberTwo > numberThree)
        numberThree = numberTwo;
    else if (numberThree > numberOne && numberThree > numberTwo)
        numberThree = numberThree;

    return 0;
}
