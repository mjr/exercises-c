#include <stdio.h>

int main() {
    int number1;
    int number2;
    int result;

    printf("Digite dois números: ");
    scanf("%d %d", &number1, &number2);

    result = number1 + number2;
    if (result > 10) {
        printf("%d", result);
    }

    return 0;
}
