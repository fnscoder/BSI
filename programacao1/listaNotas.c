/*

AA 4.4 - Processamento de lista de notas
Apresentação
Uma escola de cursinho preparatório tem disponíveis os resultados de um simulado.
A listagem disponível é anônima, ou seja, não constam informações identificando os alunos.
A lista tem, para cada aluno, apenas um código numérico (que identifica a sala) e sua nota.
A escola quer saber a média geral das notas de alunos, qual a sala obteve a melhor média
(desconsidere empates) e qual a média das salas.
Exemplo de listagem:
7	7,8
7	4,5
7	9,3
23	8,8
23	5,9
23	7,5
23	7,5
15	9,2
9	8,7
9	8,1
No exemplo, há 4 salas, sendo que a sala 7 tem 3 alunos, a sala 23 tem 4, a sala 15 apenas um e,
 finalmente, a sala 9 tem dois alunos.
Os resultados esperados são (considerando uma casa decimal e arredondando):
Média geral: 7,7
Sala com melhor média: 15, pois a sala 7 teve média 7,2, a sala 23 teve média 7,4, a sala 15
teve média 9,2 e a sala 9 teve media 8,4.
Média das salas: 8,1, dado por (7,2 + 7,4 + 9,2 + 8,4)/4
Especificação
Escreva um algoritmo para realizar os cálculos, sabendo-se que, na listagem, todos os alunos de
 uma turma necessariamente estão apresentados juntos (i.e., consecutivamente). Não se sabe o
 número de turmas que existem nem o número de alunos por turma.

Autor: FELIPE NOGUEIRA DE SOUZA 01/06/2014

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //declarando e inicializando as variaveis
    int sala, qtdeAlunosSala, qtdeAlunosTotal, qtdeSala, opcaoMesmaSala, opcaoNovaSala, codSalaMediaMaior;
    float notaAluno, somaNotaSala, somaNotaTotal, mediaGeralSala, somaMediaSala, mediaGeral, mediaMaiorSala, mediaSala;
    sala = 0;
    qtdeAlunosSala = 0;
    qtdeAlunosTotal = 0;
    qtdeSala = 0;
    opcaoMesmaSala = 0;
    opcaoNovaSala = 0;
    codSalaMediaMaior = 0;
    notaAluno = 0;
    somaNotaSala = 0;
    somaNotaTotal = 0;
    somaMediaSala = 0;
    mediaGeral = 0;
    mediaMaiorSala = 0;
    mediaGeralSala = 0;
    mediaSala = 0;

    printf("\n********************************************************************************");
    printf("\n\n*********************** PROCESSAMENTE DE LISTA DE NOTAS ************************");
    printf("\n\n********************************************************************************");

    //verifica se o usuario quer inserir notas
    printf("\n\nDeseja inserir notas para uma nova sala: 1 - Sim | 2 - Nao... ");
    scanf("%d", &opcaoNovaSala);

    if (opcaoNovaSala == 1){

        //loop sai deste loop quando o usuario nao quiser inserir notas para nova sala
        while (opcaoNovaSala == 1) {

            //solicita e recebe a sala
            printf("\n\n*******************************************************");
            printf("\n\nInforme a sala: ");
            scanf("%d", &sala);

            opcaoMesmaSala = 1;

            //enquanto usuario quiser inserir notas para mesma sala fica neste loop
            while (opcaoMesmaSala == 1){

                printf("\nDigite a nota do aluno: ");
                scanf("%f", &notaAluno);

                somaNotaSala += notaAluno;
                qtdeAlunosSala ++;

                //verifica se usuario quer inserir nota para outro aluno na mesma sala
                printf("\n\nDeseja inserir a nota de outro aluno da mesma sala: 1 - Sim | 2 - Nao... ");
                scanf("%d", &opcaoMesmaSala);

            }

            //calcula medias e zera variaveis necessarias para nova sala
            qtdeAlunosTotal += qtdeAlunosSala;
            somaNotaTotal += somaNotaSala;
            mediaSala = somaNotaSala/qtdeAlunosSala;
            somaMediaSala += mediaSala;
            somaNotaSala = 0;
            qtdeAlunosSala = 0;

            //se a media desta sala for maior que a maior media ate o momento grava esta media como maior
            if (mediaSala > mediaMaiorSala){

                mediaMaiorSala = mediaSala;
                codSalaMediaMaior = sala;
            }

            qtdeSala ++;

            //verifica se usuario quer inserir notas para uma nova sala
            printf("\n\n*******************************************************");
            printf("\n\nDeseja inserir notas para uma nova sala: 1 - Sim | 2 - Nao...  ");
            scanf("%d", &opcaoNovaSala);

        }

        //calcula media geral e media das salas
        mediaGeralSala = somaMediaSala/qtdeSala;
        mediaGeral = somaNotaTotal/qtdeAlunosTotal;

        //exibe os resultados
        printf("\n\nA sala com a melhor media foi a sala %d e sua media foi %f", codSalaMediaMaior, mediaMaiorSala);
        printf("\n\nA media geral foi: %f", mediaGeral);
        printf("\n\nA media das salas foi: %f", mediaGeralSala);

    }

   return 0;
}
