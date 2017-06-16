#include <stdio.h>

int main() {
    int students, age;
    float average;

    printf("Digite quantos alunos tem a turma: ");
    scanf("%d", &students);

    int ages[students];

    for (int i = 1; i <= students; i++) {
        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &age);
        ages[i] = age;
    }

    int sumAges = 0;

    for (int j = 1; j <= students; j++)
        sumAges += ages[j];

    average = (float) sumAges / students;
    printf("%.2f", average);

    return 0;
}
