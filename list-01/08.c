#include <stdio.h>
#include <math.h>

int main() {
    float number;

    printf("Digite um número: ");
    scanf("%f", &number);

    if (number >= 0)
        printf("%.2f\n", sqrt(number));
    else
        printf("%.2f\n", pow(number, 2));

    return 0;
}
