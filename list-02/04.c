#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    for (int dividers = 0; dividers < 100; dividers++) {
        if (dividers % number == 0)
            printf("%d\n", dividers);

        dividers++;
    }

    return 0;
}
