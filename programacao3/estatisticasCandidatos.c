/*
AA 2.2 - Estatísticas de candidatos
Descrição
Deve ser criada uma tabela para armazenar as notas dos candidatos de uma dada prova de admissão.
Para cada candidato deve ser guardados seu número de inscrição (um valor inteiro) e a nota
obtida (real).

Os seguintes resultados devem produzidos:
Nota média da prova

Essa média corresponde à soma de todas as notas, dividindo-se o total pelo número de candidatos.
Variância das notas

A variância das notas deve ser calculada pela soma das diferenças entre cada nota e a média
geral, cada uma delas elevada ao quadrado. Essa soma, ao final, deve ser dividida pelo número
de notas menos 1.
Lista de todos os números de inscrição dos candidatos cujas notas estejam no intervalo
 [, ]
Nesta listagem devem ser incluídos todos os candidatos para os quais o módulo da diferença
entre sua nota e a média seja, no máximo, o dobro da raiz quadrada da variância.

O tamanho da tabela pode ser definido pelo desenvolvedor. Verificações de consistência para os
dados de entrada não são necessárias (notas no intervalo 0 a 10, por exemplo).

Notem que a variância somente pode ser calculada se houver 2 ou mais alunos.
Se isso não ocorrer, uma mensagem adequada deve ser apresentada.

O número de alunos é considerado conhecido e pode ser digitado pelo operador.

Autor: Felipe Nogueira de Souza Data: 15/10/2014
*/

#include <stdio.h>

//define a quantidade maxima de candidatos
#define MAX 40

//define tDados
typedef struct {

    int incricao;
    float nota;
} tDados;

//procedimento que le os dados
void lerDados(tDados* candidatos, int* qtde) {

    int i = 0;

    for (i = 0; i < *qtde; i++) {

        printf("\n  %dº) Candidato:", i+1);
        printf("\n   Código de inscrição: ");
        scanf("%d", &candidatos[i].incricao);

        printf("   Nota: ");
        scanf("%f", &candidatos[i].nota);
    }
}

//procedimento que realiza os calculas das notas
void calcularMedia(tDados* candidatos, int* qtde) {

    int i;
    float media;
    float variancia;
    float limite1, limite2;
    float somaDiferencas = 0;
    float soma = 0;

    //soma todas as notas para calculo da media
    for (i = 0; i < *qtde; i++) {

        soma += candidatos[i].nota;
    }
    media = soma/(*qtde);

    //soma as diferenças
    for (i = 0; i < *qtde; i++) {

        somaDiferencas += ((candidatos[i].nota - media)*(candidatos[i].nota - media));
    }

    //calcula variancia
    variancia = somaDiferencas/(*qtde-1);

    printf("\n A media da turma é: %.2f", media);
    printf("\n A variancia é: %.2f", variancia);

    printf("\n\nExibindo a listagem: \n");

    //calcula os limites definidos no enunciaado
    limite1 = media - 2 * sqrt(variancia);
    limite2 = media + 2 * sqrt(variancia);

    //laço para exibir o codigo de inscrição dos alunos que tenham nota no intervalo definido
    for (i = 0; i < (*qtde); i++) {

        if ((candidatos[i].nota >= limite1) && ((candidatos[i].nota <= limite2))) {

            printf("\nCódigo de inscrição: %d", candidatos[i].incricao);
        }
    }
}

//função principal
int main() {

    //variaveis
    tDados candidatos[MAX];     //vetor onde serão armazenados os dados dos candidatos
    tDados* ptCandidatos;       //ponteiro para o vetor de candidatos
    int qtdeAlunos;             //quantidade de candidatos
    int* ptQtdeAlunos;          //ponteiro para a quantidade de candidatos

    //aponta os ponteiros para o endereço de memoria correspondente
    ptCandidatos = &candidatos;
    ptQtdeAlunos = &qtdeAlunos;

    //laço de repetição para solicitar a quantidade de alunos dentro do intervalo definido
    do {
        printf("\nInforme a quantidade de alunos: \n(numero entre 1 e %d)...", MAX);
        scanf("%d", &qtdeAlunos);
    } while ((qtdeAlunos < 1) || (qtdeAlunos > MAX));

    //chama procedimento para ler os dados
    lerDados(ptCandidatos, ptQtdeAlunos);

    //chama procedimento que calcula e exibe o resultado
    calcularMedia(ptCandidatos, ptQtdeAlunos);
}
