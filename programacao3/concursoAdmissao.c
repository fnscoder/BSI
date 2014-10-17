/*
Concurso de admissão
Introdução
Uma determinada prova de admissão é feita na forma de testes de múltipla escolha. Aos candidatos
é oferecida uma prova com 100 questões, com tempo máximo de resolução de 2 horas.
Como as questões podem ser com menor ou maior grau de dificuldade, não se espera que todas as
questões sejam respondidas, visto que o tempo é bastante limitado.
O cálculo da nota de cada candidato considera o número questões respondidas corretamente e
também as que ele errou. Questões deixadas sem resposta não contam nem como certas nem como
erradas.
Também se leva em conta o desempenho dos demais candidatos.
As notas dos candidatos leva em consideração:
Cada três respostas erradas anulam uma certa (no caso de 8 erros, por exemplo, são anuladas 2
questões certas), sendo esse valor considerado como o número de pontos de cada um
O maior número de questões respondidas, considerando-se todos os candidatos, é considerado como
pontuação máxima
A nota final individual é dada pela porcentagem de acerto (valores inteiros de 0 a 100),
computada entre os pontos de cada candidato em relação à pontuação máxima.
Proposta
Escreva um programa em C para ler, para cada candidato do concurso, seu número de inscrição 
(valor inteiro) e de número de questões acertadas e número total de questões respondidas.
O número total de candidatos é informado pelo usuário do programa. Assuma que nunca existam
mais que 100 candidatos.
Para cada candidato, deve ser calculada sua pontuação, conforme descrito no item anterior.
Ao final, deve ser produzida uma listagem com o número do candidato e sua pontuação. Não é
necessário que essa listagem tenha qualquer ordenação específica.
Não é preciso verificar qualquer consistência nas informações digitadas (como valores
negativos ou incoerentes). Considere que tudo será digitado corretamente pelo usuário.

Autor: Felipe Nogueira de Souza Data: 11/10/2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {

    char nome[20];
    int inscricao;
    int acertos;
    int respostas;
    int pontuacao;
    float nota;
}tCandidato;

void lerNota(tCandidato* cand, int qtde) {

    int i, erros;

    for(i = 0; i < qtde; i++) {

        printf("\n\nInforme o nome do %dº candidato: ", i+1);
        scanf("%s", &cand[i].nome);

        printf("\n\nInforme o numero de inscrição do %dº candidato: ", i+1);
        scanf("%d", &cand[i].inscricao);
        printf("\nInforme o numero de acertos: ");
        scanf("%d", &cand[i].acertos);
        printf("\nInforme o numero de questões respondidas: ");
        scanf("%d", &cand[i].respostas);

        erros = (cand[i].respostas - cand[i].acertos);
        erros = erros / 3;
        cand[i].pontuacao = (cand[i].acertos - erros);
    }
}

void calculaNotas(tCandidato* cand, int qtde) {

    int i, pontMax;
    float nota;

    pontMax = -1000;

    for(i = 0; i < qtde; i++) {

        if (pontMax < cand[i].respostas) {

            pontMax = cand[i].respostas;
        }
    }

    for (i = 0; i < qtde; i++) {

        cand[i].nota = ((100.0 * cand[i].pontuacao) / pontMax);
    }
}

void exibirCandidatos(tCandidato* cand, int qtde) {

    int i;

    for (i = 0; i < qtde; i++) {

        printf("\nNumero de inscrição: %d", cand[i].inscricao);
        printf("\nNota: %f\n", cand[i].nota);
    }
}

int main() {

    tCandidato candidatos[MAX]
    tCandidato* ptCand;
    int i, qtdeCandidadtos;
    ptCand = &candidatos;

    printf("\nInforme a quantidade de candidatos do concurso: ");
    scanf("%d", &qtdeCandidadtos);

    lerNota(ptCand, qtdeCandidadtos);

    calculaNotas(ptCand, qtdeCandidadtos);

    exibirCandidatos(ptCand, qtdeCandidadtos);
}
