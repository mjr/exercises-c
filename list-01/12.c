#include <stdio.h>

int main() {
    char name[255];
    int scoreOne, scoreTwo;
    float average;
    const int APPROVED_AVERAGE = 7, LESS_SCORE_FINAL_EXAM = 3, AVERAGE_DIVIDER = 2;

    printf("Digite o nome: ");
    scanf("%s", &name);

    printf("Digite a primeira nota: ");
    scanf("%d", &scoreOne);

    printf("Digite a segunda nota: ");
    scanf("%d", &scoreTwo);

    average = (float) (scoreOne + scoreTwo) / AVERAGE_DIVIDER;

    printf("\nNome: %s\n", name);
    printf("Primeira nota: %d\n", scoreOne);
    printf("Segunda nota: %d\n", scoreTwo);
    printf("Média: %.2f\n", average);

    if (average >= APPROVED_AVERAGE)
        printf("Aprovado.\n");
    else if (average < APPROVED_AVERAGE && average >= LESS_SCORE_FINAL_EXAM)
        printf("Prova final.\n");
    else
        printf("Reprovado.\n");

    return 0;
}
