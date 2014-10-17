/*

AlgProgr2 - AA3.5: Arranjos de Alunos (Programa C)
Faça um PROGRAMA C para resolver o seguinte problema: Uma turma de alunos possui no
máximo 40 alunos. Cada aluno possui os seguintes dados:
RA (int),
nome (string),
sexo (char, sendo M para masculino e F para feminino),
nota das provas 1, 2 e 3 (float),
 nota média (float),
 time de futebol que torce (string),
 cidade que reside (string),
 cidade de nascimento (string),
 endereço (string) e telefone (string).
 Um usuário informará quantos alunos a turma possui (pelo menos 1 aluno e no máximo 40
 alunos). Para cada aluno leia do teclado os seus dados.
 Ademais, devem ser produzidos os seguintes relatórios.
 1. Quantos alunos residem na mesma cidade que nasceram.
 2. Quantos alunos são do sexo masculino e quanto alunos são do sexo feminino.
 3. Qual a nota média da turma.
 4. Quantos alunos possuem uma nota média menor ou igual a nota média da turma.
 5. Quantos alunos torcem para o time do Palmeiras, residem em Ribeirão Preto e
 possuem um RA entre 379409 e 389989.
 Dicas:
 1. Use os conceitos de constantes (#define) e tipos (typedef) para facilitar a
 manutenção do seu código.
 2. Use o conceito de registro (struct) para agrupar os dados de um mesmo aluno.
 3. Use o conceito de arranjos de registros para representar os dados de vários alunos.

Autor: Felipe Nogueira de Souza Data: 18/08/2014

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 40
    typedef struct {

        int nRA;
        char nome[30];
        char sexo;
        float notaProva1, notaProva2, notaProva3, media;
        char time[15];
        char cidadeReside[20];
        char cidadeNascimento[20];
        char endereco[30];
        char telefone[15];

    } regAluno;

int main(int argc, char *argv[]) {

    regAluno aluno[MAXIMO];
    float somaMedia, mediaTotal;
    int qtdeAlunos, i, continuar, opcao, contCidade, contFem, contMasc, contMediaInferior, contCase5;
    somaMedia = 0;
    mediaTotal = 0;
    contCase5 = 0;
    contMediaInferior = 0;
    contFem = 0;
    contMasc = 0;
    contCidade = 0;
    qtdeAlunos = 0;
    continuar = 1;

    printf("Informe a quantidade de alunos da turma: ");
    scanf("%d", &qtdeAlunos);

    while ((qtdeAlunos < 1) || (qtdeAlunos > MAXIMO)) {

        printf("Quantidade de alunos invalida. \nInforme quantidade valida (entre 1 e 40): ");
        scanf("%d", &qtdeAlunos);
    }

    for (i = 0; i < qtdeAlunos; i++) {

        printf("\nInforme o Numero do RA do %dº aluno: ", i+1);
        scanf("%d", &aluno[i].nRA);

        printf("\nInforme o nome do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].nome);

        printf("\nInforme o sexo do %dº aluno:(F ou M) ", i+1);
        scanf("%s", &aluno[i].sexo);

        printf("\nInforme a nota da primeira prova do %dº aluno: ", i+1);
        scanf("%f", &aluno[i].notaProva1);

        printf("\nInforme a nota da segunda prova do %dº aluno: ", i+1);
        scanf("%f", &aluno[i].notaProva2);

        printf("\nInforme a nota da terceira prova do %dº aluno: ", i+1);
        scanf("%f", &aluno[i].notaProva3);

        printf("\nInforme o time de futebol do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].time);

        printf("\nInforme a cidade de residencia do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].cidadeReside);

        printf("\nInforme a cidade de nascimento do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].cidadeNascimento);

        printf("\nInforme o endereco do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].endereco);

        printf("\nInforme o telefone do %dº aluno: ", i+1);
        scanf("%s", &aluno[i].telefone);

        aluno[i].media = (aluno[i].notaProva1 + aluno[i].notaProva2 + aluno[i].notaProva3)/3;
    }

    while (continuar == 1) {

        printf("\n\nSelecione a opcao desejada: \n  1. Quantos alunos residem na mesma cidade que nasceram\n  2. Quantos alunos são do sexo masculino e quanto alunos são do sexo feminino. \n  3. Qual a nota média da turma. \n  4. Quantos alunos possuem uma nota média menor ou igual a nota média da turma. \n  5. Quantos alunos torcem para o time do Palmeiras, residem em Ribeirão Preto e possuem um RA entre 379409 e 389989.");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                for (i = 0; i < qtdeAlunos; i++){

                    if (strcmp(aluno[i].cidadeNascimento, aluno[i].cidadeReside) == 0){

                        contCidade++;
                    }
                }

                printf("\nA quantidade de aluns que residem na mesma cidade que nasceram e: %d", contCidade);

                break;

            case 2:

                for (i = 0; i < qtdeAlunos; i++){

                    if ((aluno[i].sexo == 'f') || (aluno[i].sexo == 'F')){

                        contFem++;
                    }
                    else if ((aluno[i].sexo == 'm') || (aluno[i].sexo == 'M')){

                        contMasc++;
                    }
                }

                printf("\nA quantidade de alunos do sexo feminino e: %d", contFem);
                printf("\nA quantidade de alunos do sexo masculino e: %d", contMasc);

                break;

            case 3:

                for (i = 0; i < qtdeAlunos; i++){

                    somaMedia = somaMedia + aluno[i].media;
                }

                mediaTotal = somaMedia/qtdeAlunos;
                printf("\nA media total da turma e: %f", mediaTotal);

                break;

            case 4:

                for (i = 0; i < qtdeAlunos; i++){

                    if (aluno[i].media <= mediaTotal){

                        contMediaInferior++;
                    }
                }

                printf("\nA quantidade de alunos com media menor ou igual a media geral da turma e: %f", contMediaInferior);

                break;

            case 5:

                for (i = 0; i < qtdeAlunos; i++){

                    if ((aluno[i].time == 'Palmeiras') && (aluno[i].cidadeReside == 'Ribeirão Preto') && ((aluno[i].nRA > 379409) || (aluno[i].nRA < 389989))){

                        contCase5++;
                    }
                }

                printf("\nA quatidade de alunos que torcem para o time do Palmeiras, residem em Ribeirão Preto e possuem um RA entre 379409 e 389989 e: %d", contCase5);

                break;
        }

        printf("\n\nDigite 1 para continuar ou qualquer numero para sair: ");
        scanf("%d", &continuar);
    }
}



