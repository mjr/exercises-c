#include <stdio.h>

int main() {
    int number, in = 0, out = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &number);
        if (number >= 10 && number <= 50)
            in++;
        else
            out++;
    }

    printf("%d números estão no intervalo e %d números não estão no intervalo.", in, out);

    return 0;
}
