#include <stdio.h>

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number > 20) {
        printf("%d", number);
    }

    return 0;
}
