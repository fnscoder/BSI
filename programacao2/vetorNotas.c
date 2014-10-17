/*

Autor: Felipe Nogueira de Souza RA: 581038 Data: 20/08/2014
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 50
#define NOTAMINIMA 60

typedef struct {

    char nome[30];
    int nota;
} tAluno;

int main(int argc, char *argv[]) {

    tAluno turma[MAXIMO];
    int i, alunosTotal = 0, alunosAprovados = 0, alunosReprovados = 0;

    printf("Informe o total de alunos: ");
    scanf("%d", &alunosTotal);

    while (alunosTotal > MAXIMO) {

        printf("A quantidade maxima de alunos e %d, por favor informe uma quantidade valida: ", MAXIMO);
        scanf("%d", &alunosTotal);
    }

    for (i = 0; i <alunosTotal; i++) {

        printf("Informe o nome do %dº aluno: ", i + 1);
        scanf("%s", &turma[i].nome);

        printf("informe a nota do %dº aluno: ", i + 1);
        scanf("%d", &turma[i].nota);

        if (turma[i].nota >= NOTAMINIMA) {

            alunosAprovados = alunosAprovados + 1;
        } else {

            alunosReprovados = alunosReprovados + 1;
        }
    }

    printf("A quantidade total de alunos matriculados e: %d", alunosTotal);

    printf("\nA quantidade de alunos aprovados e: %d", alunosAprovados);

    for (i = 0; i < alunosTotal; i++) {

        if (turma[i].nota >= NOTAMINIMA) {

            printf("\nAprovado: %s", turma[i].nome);
        }
    }

    printf("\nA quantidade de alunos Reprovados e: %d", alunosReprovados);

    for (i = 0; i < alunosTotal; i++) {

        if (turma[i].nota < NOTAMINIMA) {

            printf("\nReprovado: %s", turma[i].nome);
        }
    }
}
