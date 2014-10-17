/*

AlgProgr2 - AA3.4: Mapeamento de algoritmo (Programa C)
Mapear o Algoritmo 10-3 do livro-texto de algoritmos em um programa C. Obs.: implementar
o programa C equivalente ao algoritmo 10-3.

Algoritmo 10-3:
Listar o(s) melhor(es) aluno(s) de uma turma de alunos, dadas
as notas de três provas (sabendo-se que todas possuem o mesmo peso
no cálculo da média) e tendo-se o número total de alunos

Autor: Felipe Nogueira de Souza Data: 18/08/2014

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMOALUNOS 150
#define CARACTERES 30

int main(int argc, char *argv[]) {

    int i, numeroAlunos, melhorAluno;
    float notaProva1, notaProva2, notaProva3, melhorMedia;
    char nomeAluno[MAXIMOALUNOS] [CARACTERES];
    float media [MAXIMOALUNOS];

    //solicita e recebe o numero de alunos
    printf("Digite o numero de alunos: ");
    scanf("%d", &numeroAlunos);

    //verifica se o numero de alunos e maior que o numero maximo permitido
    if (numeroAlunos > MAXIMOALUNOS) {

        printf("\n\nO numero maximo de alunos e: %d", MAXIMOALUNOS);
    }

    else {

        //força substituição
        melhorMedia = -1;

        for (i = 0; i < numeroAlunos; i++) {

            //recebe o nome do aluno e as notas das provas
            printf("\n\nDigite o nome do %dº aluno: ", i+1);
            scanf("%s", &nomeAluno[i]);

            printf("Digite a nota da primeira prova: ");
            scanf("%f", &notaProva1);

            printf("Digite a nota da segunda prova: ");
            scanf("%f", &notaProva2);

            printf("Digite a nota da terceira prova: ");
            scanf("%f", &notaProva3);

            //calcula media
            media[i] = (notaProva1 + notaProva2 + notaProva3)/3;

            //verifica se a media e melhor que a melhor media
            if (media[i] > melhorMedia){

                melhorMedia = media[i];
                //armazena o indice correspondente ao aluno com melhor media
                melhorAluno = i;
            }
        }
        //exibe resultados
        printf("Melhor nota final: %f\n", melhorMedia);
        printf("Nome do aluno: %s", nomeAluno[melhorAluno]);
    }
}



