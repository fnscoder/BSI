/*
AlgProg3 Operações em matrizes numéricas
Introdução
As matrizes são uma ferramenta muito útil em diversas aplicações, envolvendo análise
estatística, processamento e imagens etc.

A manipulação básica de matrizes numéricas deve ser explorada nesta atividade.
Proposta
Escreva um programa em C para ler duas matrizes quaisquer dimensões, considerando um máximo
de 50 linhas e 50 colunas.

Apresentar como resultados:
O traço de cada uma das matrizes, se possível
A soma dessas duas matrizes, se possível
A multiplicação dessas duas matrizes, se possível
Explore o uso de sub-rotinas, com a devida passagem de parâmetros. O que pode ser feito quando
uma operação não pode ser realizada (exemplo: não existe traço se a matriz não for quadrada).

Autor: Felipe Nogueira de Souza Data: 03/10/2014
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

typedef struct {

    int linhas;
    int colunas;
    float traco;
    float dados[MAX_LINHAS][MAX_COLUNAS];
} tMatriz;

void leiaMatriz(tMatriz* matriz) {

    int i, j;

    do {
        
        printf("\nA matriz deve ter no máximo %d linhas e %d colunas", MAX_LINHAS, MAX_COLUNAS);
        printf("\nInforme o numero de linhas da matriz: ");
        scanf("%d", &(*matriz).linhas);

        printf("\nInforme o numero de colunas da matriz: ");
        scanf("%d", &(*matriz).colunas);

    } while ((*matriz).linhas < 1 || (*matriz).colunas < 1 || (*matriz).linhas > MAX_LINHAS || (*matriz).colunas > MAX_COLUNAS);

    printf("\nRecebendo os dados da matriz.");

    for (i = 0; i < (*matriz).linhas; i++) {

        for (j = 0; j < (*matriz).colunas; j++) {

            printf("\nMatriz[%d][%d]: ", i, j);
            scanf("%f", &(*matriz).dados[i][j]);
        }
    }
}

void escrevaMatriz(tMatriz* matriz) {

    int i, j;

    for (i = 0; i < (*matriz).linhas; i++) {

        for (j = 0; j < (*matriz).colunas; j++) {

            printf("\nMatriz[%d][%d]: %f", i, j, (*matriz).dados[i][j]);
        }
    }
}

void tracoMatriz(tMatriz* matriz) {

    int i;

    if ((*matriz).linhas == (*matriz).colunas) {

        (*matriz).traco = 0;

        for (i = 0; i < (*matriz).linhas; i++) {

            (*matriz).traco += (*matriz).dados[i][i];
        }
        printf("\nO traço da matriz é: %f", (*matriz).traco);
    }
    else {

        printf("\nNão é possível calcular o traço, pois, a matriz não é quadrada.");
    }
}

void somaMatriz(tMatriz* m1, tMatriz* m2, tMatriz* res) {

    //implementar procedimento para somar duas matrizes
}

void multiplicaMatriz(tMatriz* m1, tMatriz* m2, tMatriz* res) {

    int i, j, k;

    if ((*m1).linhas != (*m1).colunas) {

        (*res).linhas = 0;
        (*res).colunas = 0;
    }
    else {

        (*res).linhas = (*m1).linhas;
        (*res).colunas = (*m2).colunas;

        for (i = 0; i < (*res).linhas; i++) {

            for (j = 0; j < (*res).colunas; j++) {

                (*res).dados[i][j] = 0;

                    for (k = 0; k < (*m1).colunas; k++) {

                        (*res).dados[i][j] += ((*m1).dados[i][k]*(*m2).dados[k][j]);
                    }
            }
        }
    }
}

int main() {

    tMatriz matriz1, matriz2, resultado;
    tMatriz* ptM1;
    tMatriz* ptM2;
    tMatriz* ptRes;

    ptM1 = &matriz1;
    ptM2 = &matriz2;
    ptRes = &resultado;

    leiaMatriz(ptM1);
    leiaMatriz(ptM2);

    escrevaMatriz(ptM1);
    escrevaMatriz(ptM2);

    tracoMatriz(ptM1);
    tracoMatriz(ptM2);

    somaMatriz(ptM1, ptM2, ptRes);

    multiplicaMatriz(ptM1, ptM2, ptRes);

    printf("\nResultado da multiplicação: ");
    escrevaMatriz(ptRes);
}
