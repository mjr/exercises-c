#include <stdio.h>
#include <string.h>

int main() {
    char capital[255];

    printf("Digite o nome da capital do Brasil: ");
    scanf("%s", capital);

    if (strcmp("Brasília", capital) == 0 || strcmp("BRASÍLIA", capital) == 0)
        printf("PARABÉNS.\n");
    else
        printf("ERROU.\n");

    return 0;
}
